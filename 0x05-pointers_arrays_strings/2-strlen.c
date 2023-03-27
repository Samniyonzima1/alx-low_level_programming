#include<stdio.h>

/**
 * _strlen - prints the length of the string
 * @s: string to be evaluated
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	size_t length = 0;
	
	while (*s++)
		length++;
	return (length);
}
