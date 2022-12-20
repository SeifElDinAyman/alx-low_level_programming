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
	for (rev = lentgh; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
