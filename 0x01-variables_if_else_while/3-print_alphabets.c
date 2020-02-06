#include <stdio.h>

/**
 *This function uses the ascii value of letters to print the alphabet
 *Each increment moves to the next letter in the alphabet until it
 *reaches z
 */

int main(void)
{
  char lower = 'a';
  char upper = 'A';

  while (lower <= 'z')
    {
      putchar(lower);
      lower++;
    }
  while (upper <= 'Z')
    {
      putchar(upper);
      upper++;
    }
  putchar('\n'); /*adds a newline after the while statements finishe*/
  return (0);
}
