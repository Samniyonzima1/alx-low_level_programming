#include<stdio.h>

/**
 * main - lists multiples of 3 or five
 * Return: 0 success
 */

int main(void)
{
	int n, sum;

	for (n = 1; n < 1024; n++)	
	if (n % 3 == 0 || n % 5 == 0)
	sum = sum +n;
	printf("%d ", sum);
	printf("\n");
	return (0);
}


