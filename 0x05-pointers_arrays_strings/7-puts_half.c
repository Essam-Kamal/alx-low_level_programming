#include "main.h"

/**
 * puts_half - A function that print half of a string
 *
 * @str: chat array string type
 *
 * Description: if odd number of chars, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i /= 2; str [i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
