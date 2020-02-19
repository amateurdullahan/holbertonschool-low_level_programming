#include "holberton.h"

/**
 * _puts - prints string
 * 
 * Return: void
 */

void _puts(char *str)
{
int i;
char c;
for(i = 0; str[i] != '\0'; i++)
{
c = str[i];
_putchar(c);
}
_putchar('\n');
}
