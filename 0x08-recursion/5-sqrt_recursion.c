#include"main.h"
#include<stdio.h>

int _sqrt(int n, int u);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number
 * Return: the natual square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: number o be calculated
 * @u: iterate number
 * Return: the natural square root
 */

int _sqrt(int n, int u)
{
	int z = u * u;

	if (z > n)
		return (-1);
	if (z == n)
		return (u);
	return (_sqrt(n, u + 1));
}
