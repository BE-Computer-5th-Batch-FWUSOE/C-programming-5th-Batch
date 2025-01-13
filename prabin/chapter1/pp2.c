#include<stdio.h>
int main()
{
    int a;
    printf("Enter the integer:");
    scanf("%d",&a);
    if(a<0)
    printf("\nThe number is negative");
    else
    printf("\n The number is postive");
    return 0;
}