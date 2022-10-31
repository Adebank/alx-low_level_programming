#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - search a string for any of a set of byte
 *
 * @s:the string to search
 * @accept:rhe byte to search for
 * Return:A pointer to the byte in @s that matche s one of the byte
 * in @accept,or NULL if the byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])

				return (s);
		}
		s++;
	}
	return (NULL);
}
