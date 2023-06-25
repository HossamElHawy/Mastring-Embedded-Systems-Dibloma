
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to count number of ones in binary number
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int count = 0;
int ones(int num);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", ones(num));
}
int ones(int num)
{
    if(num%2==1)
        count++;
    if(num<=0)
        return count;
    ones(num / 2);
}