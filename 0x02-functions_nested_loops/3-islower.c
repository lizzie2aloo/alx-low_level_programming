#include "main.h"

/**
 * _islower - Function that checks for lower case
 * @c: character to be checked
 * Return : return 1 if the 'c' is in lowercase
 * otherwise always return 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
