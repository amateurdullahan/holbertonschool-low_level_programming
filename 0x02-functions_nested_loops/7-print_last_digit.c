#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
n = n % 10;
if (n <= 0)
{
n = n * -1;
}
_putchar('0' + n);
return (n);
}
