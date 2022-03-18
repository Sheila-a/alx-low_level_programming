#include "main.h"

/**
 *print_diagonal - check the code for ALX School students.
 *@n: input value

 *Description: draws diagonal line on terminal
 *Return: Always (0)
 */

void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
	while (count < n)
	{
	for (size = 0; size < count; size++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	count++;
	}
	}
	return;
}
