#include"main.h"
#define NULL
/**
 * char _strchr - function
 *
 * @src: pointer
 * @dest: pointer
 * @n: counter
 * Return: (s)
 */
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != c)
	{
		NULL;
		counter++;
	}
	if (s[counter] == c)
	{
		return (&s[counter]);
	}
	return (0);
}
