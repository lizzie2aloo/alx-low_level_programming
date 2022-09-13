#include "main.h"

/**
 * print_alphabets- Functions that print alphabets in lowercase
 * the alphabets a-z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <=  'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
