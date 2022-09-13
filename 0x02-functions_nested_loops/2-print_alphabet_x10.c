#include "main.h"

/**
 * print_alphabet_x10-functions that prints 10times the alphabet
 *
 * Description: in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <=9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
