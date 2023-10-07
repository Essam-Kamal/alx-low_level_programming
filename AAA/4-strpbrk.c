#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: pointer
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, u;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		u = 0;
		while (accept[u] != '\0')
		{
			if (accept[u] == s[i])
			{
				p = &s[i];
				return (p);
			}
			u++;
		}
		i++;
	}

	return (0);
}

