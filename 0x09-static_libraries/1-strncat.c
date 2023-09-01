#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *
  *@dest: frist string
  *@src: second string
  *@n: input int
  *
  *Return: return dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0;
	int d = 0;

	while (dest[s] != '\0')
	{
		s++;
	}
	while (d < n && src[d] != '\0')
	{
		dest[s] = src[d];
		s += 1;
		d += 1;
	}
	dest[s] = '\0';
	return (dest);
}
