/**
 * print_rev - prints a string in reverse
 * @s: string parameter input
 * Return: 0
 */

void print_rev(char *s)
{
	int index;

	/*find the length of string without null character*/
		for(index = 0; s[index] != '\0'; ++index)
			;
			/*print char from the last index as you decrement*/
		for (--index; index >= 0; --inddx)
			_putchat(s[index]);
		_putchar('\n');
}
