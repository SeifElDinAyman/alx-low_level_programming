#include "main.h"
/* more headers goes there */

/* betty style doc */

/**
 * _islower - Entry point
 *
 * @c: is the char to be checked
 *  Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
