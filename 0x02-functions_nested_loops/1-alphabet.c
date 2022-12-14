#include "main.h"
/* more headers goes there */

/* betty style doc */
/**
 * main - Entry point
 *
 *
 *  Return: Always 0 (success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
