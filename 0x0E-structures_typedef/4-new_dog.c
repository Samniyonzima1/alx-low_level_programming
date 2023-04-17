#include"dog.h"
#include<stdlib.h>

/**
 * new_dog - creates new dog struct
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: nothing
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
//return NULL for memory failure
	if (newDog == NULL)
	{
		return NULL;
//memory allocation for our strings
	}
	char *newName = malloc(strlen(name) +1);
	char *newName = malloc(strlen(owner) + 1);

//if memory allocation failed, free allocated mem and return NULL

	if (newName == NULL || newOwner == NULL)
	{
		free(new_dog);
		free(newName);
		free(newOwner);
		return NULL;
	}
//copy name and owner to allocated memory

	strcpy(newName, name);
	strcpy(newOwner, owner);
//let's now inititalize our dog with copied strings 


	new_d->name = newName;
	new_dod->age = age;
	new_dog->owner = newOwner;

	return new_og;
}
