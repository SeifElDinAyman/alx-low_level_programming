#include "main.h"

/**
 * *_strcpy - pointer
 * @dest: input
 * @src: inpuy
 * Return: n
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int x = 0;

	while ((*src + s) != '\0')
	{
		s++;
	}

	for (; x < s; x++)
	{
		dest[x] = src[x];
	}
	dest[s] = '\0';
	return (dest);
}
