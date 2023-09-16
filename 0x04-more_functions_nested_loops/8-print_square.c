#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: 0 (success)
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
	for (column = 1; column <= size; column++)
	{
		for (row = 1; row <= size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
