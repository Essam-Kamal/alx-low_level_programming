#include "main.h"

/**
 * _strspn - Afunction that gets the length of a prefix.
 * @s: string
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, u;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (u = 0; accept[u] != s[i]; u++)
		{
			if (accept[u] == '\0')
				return (i);
		}
	}

	return (i);
}
