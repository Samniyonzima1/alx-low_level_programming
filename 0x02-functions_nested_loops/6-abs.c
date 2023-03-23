#include"main.h"

/**
 * _abs - prints absolute value of anumber
 * @c: the number to be checked
 * Return: Absolute value of number o zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
