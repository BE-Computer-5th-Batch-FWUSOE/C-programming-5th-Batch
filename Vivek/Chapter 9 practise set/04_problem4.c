/*Write a program to illustrate the use of arrow operator -> in C*/

#include<stdio.h>
typedef struct emp
{
    int salary;
    float score;
} Employee;

int main(){
    Employee e1;
    Employee* ptr = &e1;
    // (*ptr).salary = 56;
    // (*ptr).score = 45.3;

    ptr->salary = 56; // is same as above.
    ptr->score = 45.3;

    printf("The salary is %d and score is %.2f \n", ptr->salary, ptr->score);

    return 0;
}