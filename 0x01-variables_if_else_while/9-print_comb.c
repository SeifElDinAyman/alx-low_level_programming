#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc */
/**
 * main - Entry point
 *
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int ch;
/* comment*/
	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');

	}
	putchar('9');
	return (0);

}
