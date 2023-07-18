#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table should be printed
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;

if (j != 0)
printf(",   ");
else
printf("0");

if (product < 10)
printf("  %d", product);
else if (product < 100)
printf(" %d", product);
else
printf("%d", product);
}
printf("\n");
}
}
