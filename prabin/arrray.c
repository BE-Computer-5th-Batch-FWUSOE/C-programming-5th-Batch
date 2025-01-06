#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char division[10];

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = (float)total / 5;

    // Determine division
    if (percentage >= 80) {
        sprintf(division, "Distinc");
    } else if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 50) {
        sprintf(division, "Second");
    } else if (percentage >= 40) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }

    // Print total, percentage and division
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);

    return 0;
}