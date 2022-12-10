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
	char ch;
/* comment*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);

}
