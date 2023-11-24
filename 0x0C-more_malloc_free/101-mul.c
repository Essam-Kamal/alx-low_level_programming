#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted.
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	if (s[0] == '-')
	{
		_puts("Error");
		exit(98);
	}


	for (firstnum = 0; !(s[firstnum] >= '0' && s[firstnum] <= '9'); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
		else if (s[firstnum] != '+')
		{
			_puts("Error");
			exit(98);
		}
	}

	for (i = firstnum; s[i] >= '0' && s[i] <= '9'; i++)
	{
		resp *= 10;
		resp += (s[i] - '0');
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: void
*/

void print_int(unsigned long int n)
{

	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
/**
 * main - prints the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
