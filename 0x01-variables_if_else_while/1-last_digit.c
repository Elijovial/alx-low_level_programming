#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main -  entry
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int i = n % 10;
/* your code goes there */
printf("Last digit of %d is %d", n, i);
if (n > 5)
{
	printf(" and is greater than 5\n");
}
else if (n == 0)
{
	printf(" and is 0\n");
}
else if (n < 6 && n != 0)
{
	printf(" and is less than 6 and not 0\n");
}
return (0);
}
