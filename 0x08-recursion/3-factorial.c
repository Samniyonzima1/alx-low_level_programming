#include"main.h"
/**
 * factorial - finds and prints factorial of number
 * @n: number to be calculated
 * Return: factorial on success and -1 on error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
