#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 * print_sign - Entry point
 *
 * @n: is the char to be checked
 *  Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	} else if (n == 0)
	{
	_putchar(48);
	return (0);
	} else if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}
