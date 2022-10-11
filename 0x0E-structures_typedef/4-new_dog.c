#include "dog.h"

/**
 * _strlen - returns
 * length of a string
 * @str: string to be counted
 * Return: returns string length
 */
int _strlen(char *str)
{
	int l = 0;
	while (str)
		l++;

	return (l);
}

/**
 * _strcopy - copy string pointed
 * by src into dest variable
 * @dest:buffer storing string copy
 * @src: buffer storing string to copy
 * Return: returns copied string
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * in case of failure
 * Return: returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}
