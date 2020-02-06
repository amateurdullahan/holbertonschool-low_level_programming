#include <stdio.h>

/**
 *Main prints lowercase alphabet except q and e
 *
 *returns 0
 */

int main(void)
{
  char l = 'a';
  while(l <= 'z')
    {
      if(l != 'e' && l != 'q')
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
