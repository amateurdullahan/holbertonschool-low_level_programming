#include <stdio.h>

/**
 * main - print 0-100, plus fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
  int c;
  for(c = 1; c < 101; c++)
    {
      if((c % 3) == 0)
	{
	  printf("Fizz");
	}
      else if ((c % 5) == 0)
	{
	  printf("Buzz");
	}
      else
	printf("%d", c);
      if(c < 100)
	{
	  printf(" ");
	}
    }
  printf("\n");
  return (0);
}
