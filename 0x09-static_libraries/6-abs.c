#include "main.h"
/**
 * _abs - comutes th absolute value of int
 *
 * @i: input number as an int
 *
 * Return: abs value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
