#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100] = "example.txt";
    char content[200];

    // 1. Create and Write to a File
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create the file %s\n", filename);
        return 1;
    }
    fprintf(file, "Hello, this is a test file.\n");
    fprintf(file, "This is the second line of the file.\n");
    fclose(file);
    printf("File created and written successfully.\n");

    // 2. Read from the File
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }
    printf("\nContents of the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);

    // 3. Append to the File
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open the file %s for appending\n", filename);
        return 1;
    }
    fprintf(file, "This is a new line appended to the file.\n");
    fclose(file);
    printf("\nNew line appended successfully.\n");

    // 4. Read the File Again
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }
    printf("\nUpdated contents of the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);

    return 0;
}
