#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: The input string added
 *
 * Return: The converted integer value. If there are no valid digits
 * in the string, or if an overflow occurs, it returns 0
*/

int _atoi(char *s);
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && (s[i] - '0') > (INT_MAX % 10)))
		{
			if (sign == 1)
				return (INT_MAX);

			else

				return (INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
