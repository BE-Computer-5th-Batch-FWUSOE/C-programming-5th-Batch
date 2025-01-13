#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n Largest numer is %d",a);
        }
        else
        {
            if(b>c)
            printf("\n Largest number is %d",b);
            else
            printf("\n Largest number is %d",c);
            return 0;
        }}
        }