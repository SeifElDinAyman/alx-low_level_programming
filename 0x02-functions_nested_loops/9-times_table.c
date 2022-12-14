#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 * times_table - Entry point
 *
 * @n: is the char to be checked
 *  Return: Always 0 (success)
 */
void times_table(void)
{
		int s, h, l;


		for (s = 0; s < 10; s++)
		{
			for (h = 0; h < 10; h++)
			{
				l = h * s;
				if (h == 0)
				{
					_putchar(l + '0');
				}


				if (l < 10 && h != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				} else if (l >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

