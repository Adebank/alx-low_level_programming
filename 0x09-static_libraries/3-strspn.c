#include "main.h"

/**
 * _strspn - gets the lenth of a prefix substring
 *
 * @s:segmemt to return byte from
 * @accept:the byte to include
 *
 * Return:the number of byte in the initial segment of
 * @s which consist of only bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
