#include "holberton.h"

/**
 * sqrtcheck - checks for square root
 * @c: numbers to play with
 * @base: base number
 *
 * Return: stuff
 */

int sqrtcheck(int c, int base)
{
if ((c * c) == base)
{
return (c);
}
if ((c * c) > base)
{
return (-1);
}
return (sqrtcheck(c + 1, base));
}

/**
 * _sqrt_recursion - return natural square root
 * @n: the aforementioned number
 *
 * Return: natural square root OR -1
 */

int _sqrt_recursion(int n)
{
return (sqrtcheck(1, n));
}
