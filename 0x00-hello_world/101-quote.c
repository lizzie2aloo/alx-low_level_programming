#include <stdio.h>
#include <unistd.h>

/**
 * main - Starting point
 *
 * Description: A C program that prints a quote
 *
 * Return: Always 1(Success)
 */

int main(void)
{
	write(2, "and that pieceof art is useful\" -Dora Korpar, 2015-10-19\n",59);
	return (1);
}
