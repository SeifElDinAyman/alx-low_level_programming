#include "main.h"
/**
 * _memset - is a function
 * @s: array
 * @b: constant
 * @n: fill value
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	for (; n > 0; count++)
	{
		s[count] = b;
		n--;
	}
	return (s);
}

