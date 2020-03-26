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
int val = 0;
val = n << index;

if (val ^ n)
{
return (1);
}
else
return (0);
}
