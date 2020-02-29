#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * numcheck - determines if string is number
 * @s: pointer to string
 *
 * Return: 1 if num, 0 if not
 */

int numcheck(char *s)
{
while (*s)
{
if ((*s > '9') || (*s < '0'))
{
return (0);
}
s++;
}
return (1);
}

/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: pointer array of arguments
 *
 * Return: 0 if no number, 1 if contains non-numerical digit
 */

int main(int argc, char *argv[])
{
int c, val;
val = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (c = 1; c < argc; c++)
{
if (numcheck(argv[c]))
{
val += atoi(argv[c]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", val);
return (0);
}
