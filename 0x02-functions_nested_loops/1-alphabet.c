#include "main.h"

/**
 * main - check the code
 *
 *print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
char letter; /*Decarling statement*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);/*print letter*/
}

_putchar('\n'); /*new line*/

return (0);
}
