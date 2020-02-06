#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - description
 *
 * Description: function generates a random number whose value
 * is stored in the variable 'n' which is then checked
 * to see if its value is greater than 5 or
 * equal to 0 or less than 6 but not 0 and then prints statements
 * to that effect
 *
 * Return: value is 0 which is positive
 */
int main(void) /*beginning of main*/
{
 int n;
 int lastnum;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
 lastnum = n % 10;
 if (lastnum > 5)
   printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
 else if (lastnum < 6 && lastnum != 0)
   printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
 else
   printf("Last digit of %d is %d and is 0\n", n, lastnum);
 return (0); /*returns value of 0*/
}
