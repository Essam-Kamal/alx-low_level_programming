#include "main.h"

/**
 * print_times_table - prints time_table of n
 *
 * @n: takes number from input
*/

void print_times_table(int n)
{
	int Re, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{

				_putchar(',');
				_putchar(' ');

				Re = num * mult;

				if (Re <= 9)
					_putchar(' ');
				if (Re <= 99)
					_putchar(' ');

				if (Re >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
}
