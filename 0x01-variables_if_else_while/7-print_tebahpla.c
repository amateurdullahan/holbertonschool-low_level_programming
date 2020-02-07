#include <stdio.h>

/**
 * main - description
 *
 * Description: This function uses the ascii value and
 * that char is an integer to print the alphabet
 * With each increment it moves to the next letter in the alphabet until it
 * reaches z, upon which it prints z and then a newline
 *
 * Return: value is 0 which is positive
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0); /*returns value of 0*/
}
