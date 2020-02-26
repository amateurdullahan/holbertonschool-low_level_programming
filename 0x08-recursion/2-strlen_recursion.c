/**
 * _strlen_recursion - return length of string
 * @s: string to return length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}
