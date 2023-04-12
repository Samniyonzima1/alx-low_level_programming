#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

/**
 * main - prints product of numbers
 * @argc: number of arguments
 * @argv: string
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
