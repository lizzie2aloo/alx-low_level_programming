#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes.
 * @s:The null-terminated string to be scanned
 * @accept:he null-terminated string containing the characters to match.
 * Return:Returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
