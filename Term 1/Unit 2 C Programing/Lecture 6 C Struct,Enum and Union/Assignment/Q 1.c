
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to store information of astudent using structure
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 25/6/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
struct student{
    char name[32];
    int roll;
    float marks;
};
int main()
{
    struct student x_student;
    printf("\nEnter information of students :\n\n");
    printf("Enter Name : ");
    fgets(x_student.name, 32, stdin);
    printf("Enter Roll Number : ");
    scanf("%d", &x_student.roll);
    printf("Enter Marks : ");
    scanf("%f", &x_student.marks);
    printf("\nDisplaying Information :\n\n");
    printf("Name : %s",x_student.name);
    printf("Roll : %d\n",x_student.roll);
    printf("Marks : %f",x_student.marks);
}
