#include "holberton.h"

/**
 * print_most_numbers - print 0 - 9 less 2 & 4
 *
 * return - void
 */
void print_most_numbers(void)
{
int c;
for(c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar(c);
else
continue;
}
_putchar('\n');
}
