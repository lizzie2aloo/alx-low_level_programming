#include "main.h"

/**
 * print_alphabets- Functions that print alphabets in lowercase
 *
 * Desscription: the alphabets a-z in lowercase
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <=  'z'; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
