/**
 * *_strncpy - dont copy that floppy 
 * @dest - its the destination
 * @src - its the source
 * @n - its the number
 *
 * Return: your copied floppy
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
