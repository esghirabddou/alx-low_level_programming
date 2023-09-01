#include "main.h"
/**
  *_strchr - function that locates a character in a string.
  *
  *@s: input char
  *@c: input char
  *
  *Return: pointer to the first occurrence
  */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	return (NULL);
}
