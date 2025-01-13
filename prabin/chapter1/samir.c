#include <stdio.h>
int main()
{
    int i;
    printf("\n The square and cube");
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d\t%d\t%d",i, (i * i), (i * i * i));
    }
}
