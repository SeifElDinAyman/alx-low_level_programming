#include "main.h"

/**
 * swap_int - pointer
 * @a: input
 * @b: pointer
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
