#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++; /* Increment by 1 to move to the next character*/

if (str[i] == '\0') /* Check if the next character is the null-terminator*/
break;

i++; /*Increment by 1 to skip the next character*/
}
putchar('\n');
}
