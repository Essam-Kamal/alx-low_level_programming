#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: the length of src to be copied
 * Return: The pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
