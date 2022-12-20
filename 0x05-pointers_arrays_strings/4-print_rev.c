#include "main.h"
/**
 * print_rev - print
 * @s: str
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (rev = length; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
