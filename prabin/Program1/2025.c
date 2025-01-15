#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: num1 = %d, num2 = %d\n", a, b);

    return 0;
}