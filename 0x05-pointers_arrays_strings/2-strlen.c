#include "main.h"

/**
 * _strlen - string
 * @s: string
 * Return: word
 */
int _strlen(char *s)
{
	int word = 0;

	while (*s != '\0')
	{
		word++;
		s++;
	}

	return (word);
}

