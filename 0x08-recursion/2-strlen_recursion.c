#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: A pointer to a string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
