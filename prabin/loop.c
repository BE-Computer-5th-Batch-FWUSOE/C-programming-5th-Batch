#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int number = 1;

    // Using while loop
    while (count < 10) {
        sum += number;
        number += 2;
        count++;
    }
    printf("Sum of first 10 odd numbers using while loop: %d\n", sum);

    // Reset variables for for loop
    sum = 0;
    number = 1;

    // Using for loop
    for (count = 0; count < 10; count++) {
        sum += number;
        number += 2;
    }
    printf("Sum of first 10 odd numbers using for loop: %d\n", sum);

    return 0;
}