#include "main.h"

/**
 * _strcpy - copies a string
 * from one pointer to another
 * @src: the source
 * @dest: the destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
