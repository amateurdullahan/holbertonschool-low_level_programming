#include <stdio.h>

/**
 * main - print arguments program recieves
 * @argc: count of arguments
 * @argv: pointer array of agruments
 *
 * Return: 0 which is positive
 */

int main(int argc, char *argv[])
{
int c;
for (c = 0; c != argc; c++)
{
printf("%s\n", argv[c]);
}
return (0);
}
