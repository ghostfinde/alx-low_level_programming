#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
int a[5];
int *p;
p = a + 2;
/* Your code goes here */
*(p + 5) = 98;
/* Printing the array */
printf("a[2] = %d\n", a[2]);
return (0);
}
