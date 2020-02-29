#include <stdio.h>

/**
 * main - muliply two arguments 
 * @argc: arguement counter
 * @argv: pointer array of arguments
 *
 * Return: 0 which is positive OR 1 which is failure
 */

int main(int argc, char *argv[])
{
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  
if (argc < 2)
    {
      printf("Error\n");
      return (1);
    }
  else
    printf("%d\n", (a * b));
  return (0);
}
