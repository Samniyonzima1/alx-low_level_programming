#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - printing the numbers in base 16 by lower case.
 * Return: (0) success
 */

int main(void)
{
	int z;
	char d;

	for (z = '0'; z <= '9'; z++)
	putchar(z);

	for (d = 'a'; d <= 'f'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
