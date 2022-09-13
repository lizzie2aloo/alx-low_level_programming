#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 *
 * @n: takes in integer typr input for function
 *
 * return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
