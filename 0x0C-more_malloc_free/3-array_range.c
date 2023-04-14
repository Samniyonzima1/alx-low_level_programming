#include"main.h"
#include<stdlib.h>

/**
 * array_range - prints arraye range
 * @min: first one
 * @max: last element
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *g, m = 0;

	if (min > max)
		return (NULL);
	g = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (g == NULL)
		return (NULL);
	while (min <= max)
	{
		g[m] = min;
		m++;
		min++;
	}
	return (g);
}

