#include "holberton.h"

/**
 * main - descrip
 *
 * Return: length of string
 */

int _strlen(char *str)
{
  int len;
  for(len = 0; str[len] != '\0'; len++);

  return(len);
}
