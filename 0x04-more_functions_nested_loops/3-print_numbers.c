#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n;

	for (n =48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
