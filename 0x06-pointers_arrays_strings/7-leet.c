/**
 * leet - encodes a string into 1337
 * @s: pointer to string
 *
 * Return: l337 string
 */

char *leet(char *s)
{
char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char leets[] = {'4', '3', '0', '7', '1'};
unsigned int i, j;

i = 0;
while (s[i])
{
j = 0;
while (j < 5)
{
if (s[i] == letters[j] || s[i] == letters[j + 5])
s[i] = leets[j];
else
s[i] = s[i];
j++;
}
i++;
}
return (s);
}
