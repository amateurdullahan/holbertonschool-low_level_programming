#include <stdio.h>

/**
 * main - description
 *
 * Description: main prints lowercase alphabet except q and e
 *
 * Return: value is 0 which is positive
 */
int main(void)
{
  char l = 'a';
  while (l <= 'z')
    {
      if (l != 'e' && l != 'q')
      {
	putchar(l);
	l++;
      }
      else
	{
	  l++;
	}
    }
  putchar('\n');
  return (0);
}
