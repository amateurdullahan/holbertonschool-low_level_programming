#include "holberton.h"

/**
 * main - u c
 *
 * Return: nah dawg
 */

void rev_string(char *s)
{
int t;
int c;
int l;
char q;

for (t = 0; s[t] != '\0'; t++)
{
}
l = t;

for (t--, c = 0; c < l / 2; t--, c++)
{
q = s[c];
s[c] = s[t];
s[t] = q;
}
}
