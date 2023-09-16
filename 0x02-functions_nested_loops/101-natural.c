#include "main.h"

/**
 * main - entry point
 *
 * Description:Computes the sum of all the multiplies of 3 or 5 below 1024
 *
 * Return: 0 (suceess)
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
