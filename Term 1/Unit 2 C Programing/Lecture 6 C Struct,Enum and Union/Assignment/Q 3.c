
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to add two complex numbers using structures and functions
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 25/6/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
struct complex{
  float real;
  float imaginary;
};
void complex_sum(struct complex x, struct complex y);
int main()
{
  struct complex num1, num2;
  printf("For First Complex Number : \nEnter Reaal And IMaginary Respectively : \n");
  scanf("%f%f", &num1.real, &num1.imaginary);
  printf("For Second Complex Number : \nEnter Reaal And IMaginary Respectively : \n");
  scanf("%f%f", &num2.real, &num2.imaginary);
  //------ Calling The Function ----------
  complex_sum(num1, num2);
}
void complex_sum(struct complex x, struct complex y)
{
  printf("Sum = %0.1f + %0.1f j", x.real + y.real, x.imaginary + y.imaginary);
}
