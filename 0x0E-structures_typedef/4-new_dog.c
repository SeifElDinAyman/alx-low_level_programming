#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog -  fn
 * @name: name
 * @age: age
 * @owner: owner
 * Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int l = 0;
	int h = 0;
	int s;
	dog_t *doge;

	while (name[l] != '\0')
		l++;
	while (owner[h] != '\0')
		h++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(l * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (s = 0; s <= l; s++)
		doge->name[s] = name[s];
	doge->age = age;
	doge->owner = malloc(h * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (s = 0; s <= h; s++)
		doge->owner[s] = owner[s];
	return (doge);
}

