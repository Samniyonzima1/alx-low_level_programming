#include"main.h"
/**
 * _islower - checking for lower case
 *@c: the character to be checked
 * Return: 0 Always
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
