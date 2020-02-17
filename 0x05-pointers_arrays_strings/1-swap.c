#include "holberton.h"

/**
 * main - swap var
 *
 * Return: nothin bro
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;  
*a = *b;
*b = temp;
}
