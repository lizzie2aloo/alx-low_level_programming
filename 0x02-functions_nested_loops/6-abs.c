#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 *
 * @n: interger to be checked
 *
 * return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if(n > 0)
		return (n);
	else
		return (0);
}
