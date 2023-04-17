#include<stdio.h>
#include"dog.h"

/**
 * init_dog - initialize my varibles
 * @d: one variable
 * @name: second variable
 * @age: third variable
 * @owner: last variable
 *
 * Return: nothing
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
