#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Taking input from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period in years: ");
    scanf("%f", &time);

    // Calculating simple interest
    simple_interest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}