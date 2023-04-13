#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: the size to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
