#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 *  print_alphabeit_x10 - Entry point
 *
 *
 *  Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 1;
	/* desc */
	while (count <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		count++;
		_putchar('\n');
	}

}
