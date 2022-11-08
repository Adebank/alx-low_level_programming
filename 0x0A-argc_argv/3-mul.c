#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the result odf multipling two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no error, 1 if error
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
				return (0);
				}
				else
				printf("Error\n");
				return (1);
				}

