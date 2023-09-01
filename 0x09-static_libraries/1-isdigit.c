#include "main.h"
/**
 * _isdigit - check if c is upper between 0-9
 *
 * @c: input alphabet
 *
 * Return: 1 if uppercase or 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
