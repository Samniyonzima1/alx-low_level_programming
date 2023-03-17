#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints  alphabets without q and e.
 * Return: always 0 (success)
 */

int main(void)
{
	char low;
	char e;
	char q;

	for (low = a, low <= z, low++)
	{
	if (low != e && low != q)
	putchar (low);
	}

	putchar ('\n');

	return (0);
}
