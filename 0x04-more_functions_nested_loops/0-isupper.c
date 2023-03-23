#include"main.h"

/**
 * _isupper - checks for upper cases
 * @c: character to be checked
 * Return: 1 if the character is upper
 * and 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
