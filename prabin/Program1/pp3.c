#include<stdio.h>
int main()
{
    int b;
    printf("Enter a non-zero number:");
scanf("%d",&b);
if(b%2==0)
printf("\n the number %d is even",b);
else
printf("\n the number %d is odd",b);
return 0;
}