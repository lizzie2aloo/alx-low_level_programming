#include "main.h"

/**
 * _islower - Function that checks for lower case
 * 'c': checks input function
 * Return : return 1 if the 'c' is in lowercase
 * otherwise always return 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
