#include "main.h"
#include "stdio.h"
/* more headers goes there */

/* betty style doc */

/**
 * print_to_98 - Entry point
 *
 * @n: is the char to be checked
 *  Return: Always 0 (success)
 */
void print_to_98(int n)
{
		int i, j;


		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else if (i == 98)
					printf("%d\n", i);
			}
		} else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
	}

