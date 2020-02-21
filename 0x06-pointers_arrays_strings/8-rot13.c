/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 *
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
int i, j;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

i = 0;
while (s[i])
{
j = 0;
while (j < 52)
{
if (s[i] == alphabet[j])
{
s[i] = rotated[j];
break;
}
j++;
}
i++;
}
return (s);
}
