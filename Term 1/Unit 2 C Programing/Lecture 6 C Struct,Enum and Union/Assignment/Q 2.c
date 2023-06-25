
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to add two distance using structures
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 25/6/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
struct distance{
  int feet;
  float inch;
};
int main()
{
  struct distance dis1, dis2,sum;
  printf("\nEnter information for first distance : \n\n");
  printf("Enter feet : ");
  scanf("%d", &dis1.feet);
  printf("Enter inch : ");
  scanf("%f", &dis1.inch);
  printf("\nEnter information for second distance : \n\n");
  printf("Enter feet : ");
  scanf("%d", &dis2.feet);
  printf("Enter inch : ");
  scanf("%f", &dis2.inch);
  // ------------ Let's Calculate The Summation -----------
  sum.feet = dis1.feet + dis2.feet;
  sum.inch = dis1.inch + dis2.inch;
  // ------------ Let's Convert The System -----------
  if(sum.inch>=12)
  {
    sum.feet +=sum.inch/12;
    int carry = sum.inch / 12;
    sum.inch -= 12*carry;
  }
  printf("\nSum of distances : %d ' %0.2f \"", sum.feet, sum.inch);
}
  