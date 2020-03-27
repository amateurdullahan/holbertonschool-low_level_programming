#include "holberton.h"

/**
 * get_bit - get value of a bit at index
 * @n: index
 * @index: point at index to get value of
 *
 * Return: value of bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
int temp = n >> index;

if (index > 32)
{
return (-1);
}

if (temp & 1)
{
return (1);
}
else
return (0);
}
