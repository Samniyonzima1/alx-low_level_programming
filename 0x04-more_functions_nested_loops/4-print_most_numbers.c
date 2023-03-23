#include"main.h"

/**
 * print_most_numbers - prints all numbers except 4 and 2 below 9
 * Return: 0 on success
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}
