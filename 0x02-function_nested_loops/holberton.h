#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_alphabet(void)
{
  char a = 'a';
  while (a <= 'z')
    {
      _putchar(a);
      a++;
    }
  _putchar('\n');
}

void print_alphabet_x10(void)
{
  int c = 0;
  char a;
  while (c < 10)
    {
      char a = 'a';
      while (a <= 'z')
	{
	  _putchar(a);
	  a++;
	}
      c++;
      _putchar('\n');
    }
}

int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else 
    {
      return (0);
    }
}

int _isalpha(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

