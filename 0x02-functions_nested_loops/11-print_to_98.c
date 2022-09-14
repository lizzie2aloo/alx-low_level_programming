#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints n to 98 counts
 * followed by a new line
 * @n: print from this number
 * Return: 0
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n > 98)
			printf("%d", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d", n++);
		printf("%d\n", n);
	}
}
