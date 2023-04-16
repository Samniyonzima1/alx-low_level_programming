#include"main.h"
#include<stdio.h>

int prime(int n, int x);

/**
 * is_prime_number - check whether number is prime or not
 * @n: the number to be checked
 *
 * Return: an integer
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - check whether a number is really prime
 * @n: the number
 * @x: the iteraction times
 * Return: 1 for prime and 0 otherwise
 */

int prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);
	return (prime(n, x + 1));
}
