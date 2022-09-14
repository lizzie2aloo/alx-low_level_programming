#include "main.h"

/**
 * print_alphabet - Function that prints all alphabets
 *
 * Description: print all alphabets in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a', alp <= 'z', alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
