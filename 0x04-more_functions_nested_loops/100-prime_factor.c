#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}

	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest prime factor of a number
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int pr, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (pr = 3; pr <= _sqrt(num); pr += 2)
	{
		while (num % pr == 0)
		{
			num = num / pr;
			largest = pr;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
