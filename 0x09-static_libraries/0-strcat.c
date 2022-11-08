#include "main.h"
#include <string.h>

/**
 * _strcat - carcatenate two strings
 * Return:char
 */
int main()
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	int l1, l2, i;

	_putchar('s1');
	_putchar('s2');

	l1 = strlen(s1);
	l2 = strlen(s2);

	ptr = s1;
	for(i = 0; i<=l2; i++)
	{
		s1(l1 + i) = s2(i);
	}
	putchar('s1');
	putchar('s2');
	putchar('ptr');
}

