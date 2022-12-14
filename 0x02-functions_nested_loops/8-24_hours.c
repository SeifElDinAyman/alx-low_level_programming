#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 * jack_bauer - Entry point
 *
 ** Return: Always 0 (success)
 *
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
		}

}
