#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @s:pointer to string
 *
 * Return:the length of the string
 **/
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
