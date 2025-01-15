#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time);

int main() {
    float principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    interest = calculateSimpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}

float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;