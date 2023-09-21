#include "main.h"

/**
 * _strncpy - Cpy a string
 *
 * @dest: pointer to destination input
 * @src: point to source input
 * @n: bytes of source
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}