#include <stdio.h>

/**
 * main(void) - description
 *
 * Description: This function uses the ascii value and
 * that char is an integer to print the alphabet
 * With each increment it moves to the next letter in the alphabet until it
 * reaches z, upon which it prints z and then a newline
 * Return: vaule is 0 which is positive
 */

int main(void)
{
  char letter = 'a'; /*asigns the ascii value of 'a' to letter*/
  while (letter <= 'z') /*while letter is less than or equal to ascii value of 'z'*/
    {
      putchar(letter); /*print the letter*/
      letter++; /*the value of letter increases incrementally*/
    }
  putchar('\n'); /*adds a newline after the while statement finishes*/
  return (0); /*returns value of 0*/
}
