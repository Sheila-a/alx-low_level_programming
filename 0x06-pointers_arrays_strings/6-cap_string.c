#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

int separator(char c)
{
	/*Delcaring condition switch*/
	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);

	default:
		return (0);
	}

}
/**
 * cap_string - capitalizes chars after given deliminators
 * @s: string to uppercase
 * Return: returns modified string
 */
char *cap_string(char *s)
{
	int count, upper;

	upper = -32; /*value constant 32*/

	count = 0;
	/*Start WHILE*/
	while (s[count] != '\0')
	{
		/*letters lowercase*/
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			/*Convert uppercase*/
			if (s[count] == *s || separator(s[count - 1]))

				s[count] += upper;
		}
		count++; /*Add count*/
	}
	return (s);
}
