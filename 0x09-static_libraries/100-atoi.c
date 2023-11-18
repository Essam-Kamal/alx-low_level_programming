#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: The input string added
 *
 * Return: The converted integer value. If there are no valid digits
 * in the string, or if an overflow occurs, it returns 0
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
