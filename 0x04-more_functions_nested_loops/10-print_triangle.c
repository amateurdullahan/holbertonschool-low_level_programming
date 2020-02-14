#include "holberton.h"

/**
 * main - def
 *
 * Return: void
 */

void print_triangle(int size)
{
int s;
int h;
int r;

if(size <= 0)
{
_putchar('\n');
}
else if (size > 0)
{
for (r = 0; r < size; r++)
{
for (s = (size - r); s > 1; s--)
{
_putchar(' ');
}
for (h = 0; h <= r; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
