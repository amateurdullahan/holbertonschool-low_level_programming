#include "holberton.h"

/**
 * print_binary - print a binary representation of a number
 * @n: number to be printed as binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
long int a = 0, count, b, temp;

if (n == 0)
{
_putchar('0');
return;
}

temp = n;

while (temp != 0)
{
a++;
temp = temp >> 1;
}

for (count = a - 1; count >= 0; count--)
{
b = n >> count;
if (b & 1)
_putchar('1');
else
_putchar('0');
}
}
