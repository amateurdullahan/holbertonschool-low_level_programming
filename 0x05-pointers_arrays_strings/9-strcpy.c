#include "holberton.h"

/**
 * *_strcpy - copy src string to dest
 *
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
int c;

for (c = 0; src[c] != '\0'; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return (dest);
}
