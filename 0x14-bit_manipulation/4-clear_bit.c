#include "holberton.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: number
 * @index: index at number
 *
 * Return: 1 if works OR -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
set = ~(1 << index);
*n = *n & set;
return (1);
}
