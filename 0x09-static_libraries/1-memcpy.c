#include "main.h"
/**
  *_memcpy - unction that copies memory area.
  *
  *@dest: input char
  *@src: input char
  *@n: input int
  *
  *Return: return pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
