#include "main.h"

/**
 * factorial - a function that finds the factorial of *n
 * @n: positive number
 *
 * Return: factorial of @n
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
