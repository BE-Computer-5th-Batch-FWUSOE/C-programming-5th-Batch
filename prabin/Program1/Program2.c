#include<stdio.h>
int main()
{
 int roll_no;
 char name[20];
 float marks;
    printf("Enter roll number: ");
    scanf("%d",&roll_no);
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter marks:");
    scanf("%f",&marks);
    printf("Roll number: %d\n",roll_no);
    printf("Name: %s\n",name);
    printf("Marks: %.2f\n",marks);
    return 0;

}