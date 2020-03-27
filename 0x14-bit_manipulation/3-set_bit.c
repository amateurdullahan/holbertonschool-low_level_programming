#include "holberton.h"

/**
 * set_bit - set value of bit at index to 1
 * @n: number
 * @index: point at index
 *
 * Return: 1 if works, -1 if doesnt
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
set = 1 << index;
*n = *n | set;
return (1);
}
