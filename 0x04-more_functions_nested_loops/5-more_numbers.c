#include "holberton.h"

/**
 * more_numbers - 0 - 14 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
char o = '0';
char t = '1';
int c;

for (c = 0; c < 15; c++)
{
if (c > 9)
{
_putchar(t);
}
_putchar(o);
o++;
if (o >'9')
{
o = '0';
}
}
_putchar('\n');
}
