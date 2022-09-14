#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int count;

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
		printf("%d\n", n):
	}
}
