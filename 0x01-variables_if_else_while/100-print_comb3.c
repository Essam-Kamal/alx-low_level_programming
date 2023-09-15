#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digitx = 0, digity;

	while (digitx <= 9)
	{
		digity = 0;
		while (digity <= 9)
		{
			if (digitx != digity && digitx < digity)
			{
				putchar(digitx + 48);
				putchar(digity + 48);

				if (digitx + digity != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digity++;
		}
		digitx++;
	}
	putchar('\n');

	return (0);
}
