#include <stdio.h>

int main() {
    char input[100];

    printf("Enter a string: ");
    // fgets(input, sizeof(input), stdin);
    // use the scanf function to read a string from the user
    scanf("%[^\n]", input);

    printf("You entered: %s", input);

    return 0;
}