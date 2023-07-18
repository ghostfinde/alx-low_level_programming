#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, fib3 = 0;
long int sum = 2; /* Start with 2 to account for the initial even value */
	
while (fib3 <= 4000000)
{
fib3 = fib1 + fib2;
if (fib3 % 2 == 0)
sum += fib3;
fib1 = fib2;
fib2 = fib3;
}

printf("%ld\n", sum);

return (0);
}
