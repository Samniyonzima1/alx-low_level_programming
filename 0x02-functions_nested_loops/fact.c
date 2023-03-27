#include<stdio.h>
/**
 * main - prints factortial
 * Return: 0 succes
 */

int main(void)
{
	int a = 10;
	int b = 1;
	
	for (int i = a; i > 1; i--)
	{
		i = i * b;
	}
	printf("factorial of %ls is %ls\n", &a, &i);
	return (0);
}
