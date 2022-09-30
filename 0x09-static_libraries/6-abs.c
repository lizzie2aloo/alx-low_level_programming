#include "main.h"

/**
 * _abs - function that prints absolute value of an interger
 * @n: interger to be checked
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);
	else
		return (0);
}
