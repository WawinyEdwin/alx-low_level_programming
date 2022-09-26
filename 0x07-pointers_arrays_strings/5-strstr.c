#include "main.h"
/**
 * _strstr - locates a sub string
 * @haystack: where we search
 * @needle: what we are searching
 * Return: a found string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k = 0;


	while (needle[k] != '\0')
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != k)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
