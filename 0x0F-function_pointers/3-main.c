#include "3-calc.h"

/**
 * main - void
 *
 * Return: 0
 */

void main(int argc, char *argv[]);
{
  int num1, num2, c;
  char op;
  if (argc > 3 || argc < 3)
    {
      printf("Error\n");
      exit(98);
    }
  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);
  c = argv[2];

  get_op_func(c)(num1, num2);
}
