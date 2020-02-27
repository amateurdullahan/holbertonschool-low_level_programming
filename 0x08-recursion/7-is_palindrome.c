#include "holberton.h"

/**
 * palindrome_check - checks for palindrome
 * @s: string to check
 * @l: length of string
 * @c: counter
 *
 * Return: 1 for palindrome, 0 for not
 */

int palindrome_check(char *s, int l, int c)
{
if (s[c] == s[l] && l != c)
{
return (palindrome_check(s, ++l, ++c));
}
if (s[c] == s[l] || c >= 1)
{
return (1);
}
if (s[c] != s[l])
{
return (0);
}
return (1);
}

/**
 * r_strlen - recursive check of string length
 * @s: string to check length
 * @i: counter
 *
 * Return: return length
 */

int r_strlen(char *s, int i)
{
if (s[i] != '\0')
{
return (r_strlen(s, ++i));
}
return (--i);
}

/**
 * is_palindrome - determines if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome OR 0 if not
 */

int is_palindrome(char *s)
{
int len;

len = r_strlen(s, 0);

return (palindrome_check(s, len, 0));
}
