#include "main.h"
/**
 * print_array - prints
 * @a: array
 * * @n: number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{

	int er;

	for (er = 0; er < (n - 1); er++)
	{
		printf("%d ,", a[er]);
	}
	if (er == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");

}
