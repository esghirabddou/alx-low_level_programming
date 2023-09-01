#include "main.h"
/**
  *_strstr - function that locates a substring.
  *
  *@haystack: input char
  *@needle: input char
  *
  *Return: pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *o = haystack;
	char *t = needle;

	while (*o == *t && *t != '\0')
	{
		o += 1;
		t += 1;
	}
	if (*t == '\0')
	{
		return (haystack);
	}
	}
	return (NULL);
}
