#include "main.h"
/**
 * _strchr - locates a charcter in a string
 * @s: the string
 * @c: the character
 * Description: returns a pointer to the first occurence of char cin string s
 * Return: pointer to the forst occurence of the character c in str
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
