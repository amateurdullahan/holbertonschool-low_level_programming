#include "holberton.h"

/**
 * get_endianness - checks for endianness
 * 
 * Return: 0 if big endian OR 1 if little endian
 */

int get_endianness(void)
{
int x;
char *y;

x = 1;
y = (char *)&x;

return (*y);
}
