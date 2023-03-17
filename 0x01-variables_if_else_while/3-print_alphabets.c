#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
	char low;
	char  B;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (B = 'A'; B <= 'Z'; B++)
	{
		putchar(B);
	}
	putchar('\n');

	return (0);
}
