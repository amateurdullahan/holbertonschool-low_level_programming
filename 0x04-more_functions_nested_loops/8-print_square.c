#include "holberton.h"

/**
 * print_square - make a square with hashtags
 *
 * Return: nothing
 */

void print_square(int size)
{
int row;
int column;

if (size <= 0)
{
_putchar('\n');
return;
}
else
for (column = 0; column < size; column++)
{
row = 0;
while (row < size)
{
_putchar(35);
row++;
}
_putchar('\n');
}
}
