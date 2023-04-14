#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _realloc - realloc command
 * @ptr: parameter
 * @old_size: older size of the memory
 * @new_size: new size of the memory
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (y = 0; y < old_size && y < new_size; y++)
	{
		nptr[y] = ((char *) ptr)[y];
	}
	free(ptr);
	return (nptr);
}
