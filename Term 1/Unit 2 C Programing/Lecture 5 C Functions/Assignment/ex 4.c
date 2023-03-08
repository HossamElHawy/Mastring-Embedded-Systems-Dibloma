
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program to reverse a string using recursion
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : C Functions
Date     : 7/3/2023
-------------------------------------------------------------------------------------------- 
*/
#include <stdio.h>
#include <string.h>
int calc_power(int base,int power);
int number=1;
int main()
{
    int base, power;
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter power number (positive number) : ");
    scanf("%d", &power);
    calc_power(base, power);
    printf("%d ^ %d = %d", base, power, number);
}
// ------------This Is The Factorial Function --------------
int calc_power(int base, int power)
{
    if (power <= 0)
      return number;
    number *= base;
    calc_power(base, --power);
}
