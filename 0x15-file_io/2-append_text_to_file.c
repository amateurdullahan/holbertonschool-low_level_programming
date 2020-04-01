#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 if successful OR -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, w;


if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);

fd = open(filename, O_WRONGLY | 0_APPEND);

if (fd < 0)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
for (len = 0; text_content[len]; len++)
;
w = write(fd, text_content, len);
close(fd);
if (fd == -1 || w == -1)
{
return (-1);
}
return (1);
}
