#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned int fib1 = 1, fib2 = 2, fib3;
unsigned int count, sum;

printf("%u, %u", fib1, fib2);

sum = fib2;

for (count = 3; count <= 100; count++)
{
fib3 = fib1 + fib2;
if (fib3 > 4000000)
break;

printf(", %u", fib3);

if (fib3 % 2 == 0)
sum += fib3;

fib1 = fib2;
fib2 = fib3;
}

printf("\nSum: %u\n", sum);

return (0);
}
