#include "main.h"

/**
 * print_line - print a stright line
 *
 * @n: is the number of lines to draw
 *
 * Return: empty
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
			_putchar ('_');
		_putchar('\n');
	}
}
