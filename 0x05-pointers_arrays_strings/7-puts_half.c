#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int length = 0;
int half_length;
char *ptr = str;

/*Calculate the length of the string*/
while (*ptr != '\0')
{
length++;
ptr++;
}

/*Calculate the half-length (rounded down for odd-length strings)*/
half_length = (length + 1) / 2;

/* Move the pointer to the second half of the string*/
ptr = str + half_length;

/* Print the second half of the string*/
while (*ptr != '\0')
{
putchar(*ptr);
ptr++;
}

/* Print a new line after the second half*/
putchar('\n');
}

