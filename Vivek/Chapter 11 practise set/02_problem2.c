/*Use the array in problem 1 to store 6 integers entered by the user.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) malloc(6 * sizeof(int));
    printf("Enter number one by one\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The integers are: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}