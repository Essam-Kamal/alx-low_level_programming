#include "main.h"

/**
 * print_chessboard - A function that prints chessboard.
 * @a: rows
 * Return: empty
*/

void print_chessboard(char (*a)[8])
{
	int i, u;

	for (i = 0; i < 8; i++)
	{
		for (u = 0; u < 8; u++)
		{
			_putchar (a[i][u]);
		}
		_putchar('\n');
	}
}
