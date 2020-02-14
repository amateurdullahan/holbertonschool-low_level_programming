#include "holberton.h"

/**
 * print_line - print line n times
 *
 * Return: void
 */

void print_line(int n)
{
int c = 0;
if (n == 0)
{
_putchar('\n');
return;
}
while(c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
