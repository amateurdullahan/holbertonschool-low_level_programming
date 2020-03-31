#include "holberton.h"

/**
 * read_textfile - reads text file and prints to POSIX stdout
 * @filename: name of file
 * @letters: num of chars in file
 *
 * Return: number of letters could read+print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
int length, wrotechars;
char *buf;

if (filename == NULL || letters == 0)
return (0);
buf = malloc(sizeof(char) * (letters));
if (buf == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
{
free(buf);
return (0);
}
length = read(file, buf, letters);
if (length == -1)
{
free(buf);
close(file);
return (0);
}

wrotechars = write(STDOUT_FILENO, buf, length);

free(buf);
close(file);
if (wrotechars != length)
return (0);
return (length);
}
