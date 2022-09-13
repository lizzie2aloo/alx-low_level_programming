#include "main.h"

/**
 * print_alphabets- Functions that print alphabets in lowercase
 *
 * Description: print the alphabets a-z in lowercase
 *
 * Return: Always 0 (success)
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
