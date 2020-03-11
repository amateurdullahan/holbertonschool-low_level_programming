#include "3-calc.h"

/**
 * get_op_func - get the correct operator to preform the function
 * @s: string that contains necessary operator
 *
 * Return: index of array matching correct operator
 */

int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
  };
  int i;
  i = 0;
  while (i < 5)
    {
      if (ops[i] = s)
	{
	  return ops[i].op[i];
	}
      i++;
    }
}
