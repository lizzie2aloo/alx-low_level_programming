#include "main.h"

/**
 * print_alphabet - Function that prints alphabet
 *
 * Description: prints alphabets in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter+++)
	{
		_putchar (letter);
	}
	_putchar('\n');
}
