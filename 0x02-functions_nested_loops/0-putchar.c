#include "main.h"

/**
 * 
 * Description - A program that prints putchar
 *
 * Return always 0 (successful)
 */

int print_putchar(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
