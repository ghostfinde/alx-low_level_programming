#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
int length = 0;
char *ptr = s;

/* Calculate the length of the string */
while (*ptr != '\0')
{
length++;
ptr++;
}
/* Move the pointer to the last character of the string */
ptr = s + length - 1;
/* Print the characters in reverse order */
while (length > 0)
{
putchar(*ptr);
ptr--;
length--;
}
/* Print a new line after printing the reversed string */
putchar('\n');
}
