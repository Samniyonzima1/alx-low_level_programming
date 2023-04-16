#include"main.h"
#include<string.h>

/**
 * _strlen_recursion - prints the length of string
 * @s: string to be evaluated
 * Return: 0 on success
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
