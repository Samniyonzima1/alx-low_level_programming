#include"main.h"
/**
 * _isalpha - checking for alphabetical characters
 * @c: character to be checked
 * Return: 1 for slphabetic characters or 0 itherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
