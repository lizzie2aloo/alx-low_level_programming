/**
 * _strlen - returns the length of s string
 * @s: string parameter input
 * Return: Length of a spring
 */
	
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '/0'; ++s)
		++counter;

	return +(counter);
}
