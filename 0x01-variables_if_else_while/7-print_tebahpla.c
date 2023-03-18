#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints reveresed lower case alphabet.
 * Return: (0) success
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	putchar(a);
	putchar('\n');

	return (0);
}
