#include <stdio.h>

int factorial(int n);
int gcd(int a, int b); 

int main() {
    int num1, num2;
    
    printf("Enter a positive integer for finding factorial: ");
    scanf("%d", &num1);
    
    printf("Factorial of %d is: %d\n", num1, factorial(num1));
    
    printf("\nEnter two positive integers for finding gcd: ");
    scanf("%d %d", &num1, &num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    
    return 0;
}
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int gcd(int a, int b) {
    if (b == 0) {
        return 0;
}

