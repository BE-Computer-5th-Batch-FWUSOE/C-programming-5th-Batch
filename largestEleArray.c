#include <stdio.h>

int main() {
    int n, i, largest;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    largest = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
