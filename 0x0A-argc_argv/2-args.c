#include<stdio.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

/**
 * main - prints all arguments it recieves
 * @argv: string
 * @argc: number of arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
