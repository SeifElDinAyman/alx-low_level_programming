#include "dog.h"
/**
 * init_dog - fn
 * @d: ptr
 * @name: ptr
 * @age: age
 * @owner: ptr
 * Return: no value.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
