#include<stdio.h>
#include<stdlib.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

/**
 * main - prints product of numbers
 * @argc: number of arguments
 * @argv: string
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int z = x * y;

	if (argc != 3)
	{
		printf("error\n");
		return (0);
	}
	printf("%d\n", z);
	return (0);
}
