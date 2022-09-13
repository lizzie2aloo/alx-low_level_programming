#include "main.h"

/**
 * print_alphabet - Function that prints alphabet
 *
 * Description: prints in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter+++)
	{
		_putchar (letter);
	}
	_putchair('\n');
}
