#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring.
  *
  *@s: input char
  *@accept: char
  *
  *Return: number of bytes in the initial
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, v, cc;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cc = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				v += 1;
				cc = 1;
			}
		}
		if (cc == 0)
		{
			return (v);
		}
	}
	return (v);
}
