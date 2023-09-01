#include "main.h"
/**
 * _islower - Showe 1 or 0 lowercase
 *
 *@c: the char in ASCII
 *
 * Return: 1 for lowercase char. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
