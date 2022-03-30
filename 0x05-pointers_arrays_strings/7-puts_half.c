#include "main.h"

/**
 * puts_half - Prints half of a string followed by new line.
 * @str: The string to be printed.
 */

void puts_half(char *str)

{
	int i, last;

	i = 0;
	while (str[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	last = (i + 1) / 2; /*divide 2 the variable i */

	for (i = last; str[i]; i++) /*Start FOR*/
	{
		_putchar (str[i]);
	} /*End FOR*/

	_putchar ('\n');

}
