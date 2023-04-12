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
	int x, y, z;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0)
	{
		printf("error\n");
		return (0);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
