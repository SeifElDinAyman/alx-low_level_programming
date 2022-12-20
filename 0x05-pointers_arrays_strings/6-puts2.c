#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		length++;
	}
	i = length - 1;
	for (o = 0 ; o <= i ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
