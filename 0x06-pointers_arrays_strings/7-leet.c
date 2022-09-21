#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string.
 * Return: @s
 */

char *leet(char *)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (*(s + count) != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array sl or
		 * upper letter in array ul and if it
		 * is replace it with the value in array n
		 */
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_case[i] || *(s + count) == upper_case[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
