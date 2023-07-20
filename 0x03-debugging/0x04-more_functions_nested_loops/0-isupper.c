#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
