#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 * print_last_digit - Entry point
 *
 * @n: is the char to be checked
 *  Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	if (a < 0)
	a = -a;
	_putchar(a + '0');
	return (a);

}
