#include "holberton.h"

/**
 * swap_int - swappin ints
 *
 * Return: values of a and b switched
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;  
*a = *b;
*b = temp;
}
