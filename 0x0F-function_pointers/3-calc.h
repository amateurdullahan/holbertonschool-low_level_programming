#ifndef CALC_H
#define CALC_H
#include <stdlib.h>

/* Structures Start Here */

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
  char *op;
  int (*f)(int a, int b);
} op_t;


/* Structures End Here */

/* Functions Start Here */

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

/* Functions End here */

#endif /* CALC_H */
