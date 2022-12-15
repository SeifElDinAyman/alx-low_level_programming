#include "main.h"
/**
* print_most_numbers - checks for uppercase character
* Return: Always 0.
*/
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 2)
		{
		if (num != 4)
		{
		_putchar(num);
			}
		}
	}
	_putchar('\n');
}
