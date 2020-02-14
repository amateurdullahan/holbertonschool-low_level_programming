#include "holberton.h"

/**
 * print_numbers - print 0 thru 9
 *
 * Return: 0
 */

void print_numbers(void)
{
int c;
for(c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
