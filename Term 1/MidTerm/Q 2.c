
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to take an integer number and calculate it's square root
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
float sq_root(int num);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%0.3f", sq_root(num));
}
float sq_root(int num)
{
    return sqrt(num);
}