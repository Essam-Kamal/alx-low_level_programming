#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all possible combinations of two two-digit numbers.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int 1stdigit = 0, 2nddigit;

	while (1stdigit <= 99)
	{
		2nddigit = 1stdigit;
		while (2nddigit <= 99)
		{
			if (2nddigit != 1stdigit)
			{
				putchar((1stdigit / 10) + 48);
				putchar((1stdigit % 10) + 48);
				putchar(' ');
				putchar((2nddigit / 10) + 48);
				putchar((2nddigit % 10) + 48);

				if (1stdigit != 98 || 2nddigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			2nddigit++;
		}
		1stdigit++;
	}
	putchar('\n');

	return (0);
}
