#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @ *s: character param
 * @b: char param
 * @n: unsigned int
 * Description: fills the first n bytes of the memmory pointed to by s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s. char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
