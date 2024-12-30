#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    // Calculate factorial
    unsigned long long result = factorial(num);
    
    // Output the result
    if (num >= 0) {
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}
