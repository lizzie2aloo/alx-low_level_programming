#include "main.h"

/**
 *
 * _isalpha-check if character is a letter
 * for both lowercase or uppercas
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if c is a letter else return 0
 */

int _isalpha(int c)
{
	if(c >= 97 && c <= 122 &&
	   c >= 65 && c >= 90)
		return (1);
	return (0);
}
