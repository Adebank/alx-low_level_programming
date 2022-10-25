#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s:input char
 * Return:0
 */
void print_rev(char *s)
{
	int i = 0;

		for (s[i] = 0; s[i] != '\0'; i++)
			_putchar(s[--i]);
	_putchar('\n');
}
