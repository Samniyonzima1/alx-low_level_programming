#include"main.h"

/**
 * _puts - writes the character c to stdout
 * @str: The string to print
 * Return: 0 always
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
			{
			_putchar(*str);
			}
	_putchar('\n');

}
