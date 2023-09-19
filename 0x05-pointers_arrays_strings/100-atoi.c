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
		++i 

