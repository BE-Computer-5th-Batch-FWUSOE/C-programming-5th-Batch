#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            c=(i+j)*5;
            printf("%d\t",c);
        }
        printf("\n");
        return 0;
    }
}