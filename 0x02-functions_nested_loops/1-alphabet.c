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
	char Alphs;

	for (Alphs = 'a'; Alphs <= 'z'; Alphs++)
	{
		_putchar(Alphs);
	}

	_putchar('\n');
	return (0);
}
