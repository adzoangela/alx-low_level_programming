#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *dest_file);
void close_descriptor(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @dest_file: The name of the destination file buffer.
 *
 * Return: A pointer to the newly-allocated buffer, or NULL on failure.
 */
char *allocate_buffer(char *dest_file)
{
	char *custom_buffer;

	custom_buffer = malloc(sizeof(char) * 1024);

	if (custom_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: memory allocation failed for %s\n", dest_file);
		exit(99);
	}

	return (custom_buffer);
}

/**
 * close_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: closing fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies data from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, or an appropriate exit code on failure.
 *
 * Description: If the argument count is incorrect, it exits with code 97.
 *              If it cannot read from the source file or allocate memory, it exits with code 98.
 *              If it cannot write to the destination file or close file descriptors, it exits with code 99 or 100, respectively.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, read_bytes, write_bytes;
	char *custom_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	custom_buffer = allocate_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	read_bytes = read(source_fd, custom_buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from source file %s\n", argv[1]);
			free(custom_buffer);
			exit(98);
		}

		write_bytes = write(dest_fd, custom_buffer, read_bytes);
		if (dest_fd == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to destination file %s\n", argv[2]);
			free(custom_buffer);
			exit(99);
		}

		read_bytes = read(source_fd, custom_buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(custom_buffer);
	close_descriptor(source_fd);
	close_descriptor(dest_fd);

	return (0);
}
