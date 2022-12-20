#include "main.h"
/**
 * puts_half - print
 * @str: input
 */
void puts_half(char *str)
{
	int a, half, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	half = (length / 2);

	if ((length % 2) == 1)
		half = ((length + 1) / 2);

	for (a = half; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
