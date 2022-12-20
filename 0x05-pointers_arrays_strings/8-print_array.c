#include "main.h"
/**
 * print_array - prints
 * @a: array
 * * @n: number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{

	int counter;

	for (counter = 0; counter < (n - 1); counter++)
	{
		printf("%d, ", a[counter]);
	}
	if (counter == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");

}
