#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints the size of various types on
 * the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Print the size of a char */
printf("Size of a char: %lu byte(s)\n", sizeof(char));
/* Print the size of an int */
printf("Size of an int: %lu byte(s)\n", sizeof(int));
/*Print the size of a long int */
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
/* Print the size of a long long int */
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
/* Print the size of a float */
printf("Size of a float: %lu byte(s)\n", sizeof(float));
/* End program successfully */
return (0);
}
