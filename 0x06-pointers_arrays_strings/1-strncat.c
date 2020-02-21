#include "holberton.h"

/**
 * strncat - does stuff
 * @dest - dest
 * @src - src
 * @n - int
 *
 * Description: its a function
 *
 * Return: oh wow
 */

char *_strncat(char *dest, char *src, int n)
{
int c;
int l;

for (c = 0; dest[c] != '\0'; c++);
for (l = 0; l < n && src[l] != '\0'; l++, c++)
{
dest[c] = src[l];
}
if (dest[c] != '\0')
{
c++;
dest[c] = '\0';
}
return (dest);
}
