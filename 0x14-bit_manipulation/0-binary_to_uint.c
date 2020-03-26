#include "holberton.h"

/**
 * binary_to_unit - convert binary stored in char string to unsigned int
 * @b: const char b storing binary
 *
 * Return: converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int dec = 0, base = 1;
int i = 0;
if (b == NULL)
{
return (0);
}

while (b[i+1])
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}

while (i >= 0)
{
dec += ((b[i] - '0') * base);
base *= 2;
i--;
}
return (dec);
}
