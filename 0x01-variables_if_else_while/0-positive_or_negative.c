#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**
 *main - a c program that picks a random number and execute it
 *Return: ALWAYS SUCCESS
 */

/*
 * each randomly picked number will be different from the previous number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
