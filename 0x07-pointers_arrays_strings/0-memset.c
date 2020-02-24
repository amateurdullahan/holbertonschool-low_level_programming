/**
 * *_memset - sets memory to byte b
 * @s: the pointer
 * @b: the byte added to pointer
 * @n: the amount of times b is added
 *
 * Return: the pointer, modified
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
