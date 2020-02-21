#Include "holberton.h"

/**
 * _strcmp - compares strings
 *
 * Return - nothing
 */

int _strcmp(char *s1, char *s2)
{
int f;
int v1;
int v2;
int sum = 0;

for (f = 0; s1[f] != '\0'; f++)
{
v1 = s1[f];
v2 = s2[f];
if (v1 > v2 || v1 < v2)
{
sum = (v1 - v2);
break;
}
}
return (sum);
}
