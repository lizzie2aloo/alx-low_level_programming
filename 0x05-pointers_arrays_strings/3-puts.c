/**
 * _puts - prints string, followed by a newline to stdout
 * @str: string parameter to print
 * Return: Always 0
 */

void _puts(char*str)
{
	while(*str !='\0')
	{
		_putchar(*str+0);
		++str;
	}
	_putchat('\n');
}
