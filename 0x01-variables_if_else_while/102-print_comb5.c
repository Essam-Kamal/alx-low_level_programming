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
	int 1st_digit = 0, 2nd_digit;

	while (1st_digit <= 99)
	{
		2nd_digit = 1st_digit;
		while (2nd_digit <= 99)
		{
			if (2nd_digit != 1st_digit)
			{
				putchar((1st_digit / 10) + 48);
				putchar((1st_digit % 10) + 48);
				putchar(' ');
				putchar((2nd_digit / 10) + 48);
				putchar((2nd_digit % 10) + 48);

				if (1st_digit != 98 || 2nd_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			2nd_digit++;
		}
		1st_digit++;
	}
	putchar('\n');

	return (0);
}
