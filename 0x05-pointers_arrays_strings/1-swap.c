/**
 * swap_int - swaps the values of two intergers
 * using two input parameters
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Always 0
 */

void swap_int(int *a, int *b);
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
