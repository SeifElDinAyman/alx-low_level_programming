#include "main.h"
/*
 *_isupper - checks for uppercase character
 * Return 1 & 0)
 * @c: is text
 */
int _isupper(int c)
{
	if (c <= 'a' &&  c >= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
