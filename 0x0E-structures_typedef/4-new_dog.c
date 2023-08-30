#include <stdlib.h>
#include "dog.h"

/**
 * _stringlength - returns the length
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _stringlength(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _stringcopy - copies the string
 * @dest: pointer to the buffer
 * @src: string
 * Return: the pointer to dest
 */
char *_stringcopy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int length1, length2;

	length1 = _stringlength(name);
	length2 = _stringlength(owner);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (length1 + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (length2 + 1));
	if (dogy->owner == NULL)
	{
		free(dogy);
		free(dogy->name);
		return (NULL);
	}
	_stringcopy(dogy->name, name);
	_stringcopy(dogy->owner, owner);
	dogy->age = age;

	return (dogy);
}
