#include"function_pointers.h"
/**
 * int_index - fn
 * @array: arr
 * @size: size
 * @cmp: ptr
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return (s);
	}
	return (-1);
}
