#include "main.h"
/**
  *_strcat - function that concatenates two strings
  *
  *@dest : frist string
  *@src : second string
  *
  *Return: return dest
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int n = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[n] != '\0')
	{
		dest[len] = src[n];
		len++;
		n++;
	}
	dest[len] = '\0';
	return (dest);
}
