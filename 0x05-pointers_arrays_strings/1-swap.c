#include<stdio.h>

/**
 * swap_int - swaps the values of integers a and b
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*the function that swaps values of the two integers*/

{
	int temp = *a;
	*a = *b;
	*b = temp;
}

