#include "main.h"

/**
 * print_diagonal - print adiagnoal line
 *
 * @n: is the number of times the \ character should be printed
 *
 * Return: empty
*/

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (n > 1)
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
