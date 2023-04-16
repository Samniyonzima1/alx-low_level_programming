#include"main.h"
#include<math.h>

/**
 * _pow_recursion - prints the power of number
 * @x: number
 * @y: power
 * Return: value of x raised to power of y on success
 * on error -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	if (y < 0)
	{
	return (-1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
