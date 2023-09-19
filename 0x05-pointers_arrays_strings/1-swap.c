#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: empty
*/

void swap_in(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = b;
	*b = temp;
}
