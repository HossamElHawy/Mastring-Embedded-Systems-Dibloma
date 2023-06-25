
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to sort information of 10 students using structures and arrayes
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
  float marks;
};

int main()
{
  struct student list[10];
  printf("Enter Information Of Students : \n\n");
  for (int roll = 0; roll < 10;roll++)
  {
      printf("For Roll Number %d\n", roll + 1);
      printf("Enter Name : ");
      scanf("%s", &list[roll].name);
      printf("Enter Marrks : ");
      scanf("%f", &list[roll].marks);
  }
  //------------- Displaying the information ------------
  printf("\nDisplaying Information Of Students : \n");
  for (int roll = 0; roll < 10; roll++)
  {
      printf("\nFor Roll Number %d\n", roll + 1);
      printf("Name : %s\n",list[roll].name);
      printf("Marrks : %0.2f\n",list[roll].marks);
     
  }
}

