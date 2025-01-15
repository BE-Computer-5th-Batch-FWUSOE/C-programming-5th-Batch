#include<stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    sum += i*i;
    printf("Sum of squares of %d natural numbers is: %d\n", n, sum);
    return 0;
    }
