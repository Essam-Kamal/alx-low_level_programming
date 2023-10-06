#include "main.h"
#include <stdio.h>

/**
 * *_str - function that locates a substring.
 * @haystack: string
 * @needle: pointer
 * Return: The pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i, u;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (u = i; haystack[u] > '\0' && needle[u - i] > '\0'; u++)
		{
			if (haystack[u] != needle[u - i])
			{
				break;
			}
		}
		if (needle[u - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
