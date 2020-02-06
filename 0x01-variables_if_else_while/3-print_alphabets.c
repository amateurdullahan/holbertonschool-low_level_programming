#include <stdio.h>

/**
 *This function uses the ascii value and the fact that char is an integer to print the
 *alphabet. With each increment it moves to the next letter in the alphabet until it
 *reaches z
 */

int main(void)
{
  char lower = 'a';
  char upper = 'A';
  while (lower <= 'z') /*while lower is less than or equal to ascii value of 'z'*/
    {
      putchar(lower);
      lower ++; 
    }
  while (upper <= 'Z') /*while upper is less than or equal to the ascii value of 'Z'*/
    {
      putchar(upper);
      upper ++;
    }
  putchar('\n'); /*adds a newline after the while statements finishe*/
  return (0); 
}
