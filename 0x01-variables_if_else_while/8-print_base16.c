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
	char a;
/* comment*/
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}
