#include "main.h"

/**
 * _isalpha-check if character is a letter
 * for both lowercase or uppercase
 *
 * @c: character to be checked
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
