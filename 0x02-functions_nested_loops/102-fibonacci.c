#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void fibonacci(void) {
int i;
long long int fib1 = 1, fib2 = 2, fib;
    
printf("%lld, %lld", fib1, fib2);
    
for (i = 3; i <= 50; i++) {
fib = fib1 + fib2;
printf(", %lld", fib);
        
fib1 = fib2;
fib2 = fib;
}
    
printf("\n");
}
int main(void) {
fibonacci();
return 0;
}
