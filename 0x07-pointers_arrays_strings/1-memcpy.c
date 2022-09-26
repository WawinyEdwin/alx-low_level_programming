#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: unsigned int
 * Description: copies n bytes from memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (*dest);
}
