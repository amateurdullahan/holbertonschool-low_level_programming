#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * int main(void) - prints random numbers
 * 
 * Description: This function gives the variable n a random 
 * value and then determines whether that value is less 
 * than, equal to or greater than zero and 
 * prints that into the terminal
 *
 * Return: Value is Zero
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2; /*Code I do not need to touch*/
  if (n > 0) /*determining if n is positive, negative or equal to zero*/
    {
      printf("%d is positive\n", n);
    }
  else if (n < 0)
    {
      printf("%d is negative\n", n);
    }
  else
    {
      printf("%d is zero\n", n);
    }
  return (0);
}
