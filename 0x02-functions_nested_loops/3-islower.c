#include "main.h"

/**
 * _islower - Function that checks for lower case
 * @c: character to be checked
 * Return : return 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
