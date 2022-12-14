#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 *  print_alphabet- Entry point
 *
 *
 *  Return: Always 0 (success)
 */
void print_alphabet(void)
{

	char letter;
	/* desc */
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
