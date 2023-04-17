#include<stdio.h>
#include"dog.h"

/**
 * init_dog - initialize my varibles
 * @d: function
 * @name: second variable
 * @age: third variable
 * @owner: last variable
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
