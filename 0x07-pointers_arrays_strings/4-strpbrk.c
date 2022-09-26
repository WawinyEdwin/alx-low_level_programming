#include "main.h"
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: string input
 * @accept: to match
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s)
		}
		s++;
	}
	return (NULL);
}
