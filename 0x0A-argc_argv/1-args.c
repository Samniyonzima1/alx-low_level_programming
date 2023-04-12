#include<stdio.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

/**
 * main - prints number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
