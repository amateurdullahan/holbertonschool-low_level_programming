/**
 * *_strchr - find first occurence of c in s
 * @s: the string
 * @c: character we are looking for
 *
 * Return: s if c found or null if not
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
