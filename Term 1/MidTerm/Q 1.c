
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to take a number and sum all digits
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int sum_digits(int num);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", sum_digits(num));
}
int sum_digits(int num)
{
    int sum = 0;
    for (int i = 1; i < num;i*=10)
    {
        sum += (num % (i * 10)) / i;
    }
    return sum;
}