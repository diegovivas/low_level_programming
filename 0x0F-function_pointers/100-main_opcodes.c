#include <stdio.h>
#include <stdlib.h>
/**
 * main - chambonada
 * @argc: the integer to print
 *@argv: arguments
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	char a;

	a = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (a < 0)
	{
		printf("Error\n");
		exit(0);
	}
	return (0);
}
