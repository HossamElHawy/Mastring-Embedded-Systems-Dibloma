
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to calculate the factorial of an number using recursion
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : C Functions
Date     : 7/3/2023
-------------------------------------------------------------------------------------------- 
*/
#include <stdio.h>
#include <string.h>
int fact = 1;
int factorial(int num);
int main()
{
    int num;
    printf("Enter an positive integer : ");
    scanf("%d", &num);
    printf("Factorial of %d is : %d ", num,factorial(num) );
   
}
// ------------This Is The Factorial Function --------------
int factorial(int num)
{
    fact*=num--;
    if(num<=0)
        return fact;
    factorial(num);
}
