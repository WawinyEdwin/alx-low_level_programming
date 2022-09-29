#include "main.h"
/**
 * *_strcat - Concanates 2 strings
 * Description:  appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * *dest: string to append to
 * *src: to append
 * Return: a char
*/
char *_strcat(char *dest, char *src)
{
    char *cont;


    cont = *dest + src;
    return (*cont);
}