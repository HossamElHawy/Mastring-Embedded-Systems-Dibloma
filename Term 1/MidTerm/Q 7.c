
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to sum numbers from 1 to 100(without loop)
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int SUM = 0;
int sum(int n);
int main()
{
    printf("%d", sum(100));
}
int sum( int n)
{
    SUM += n;
    if(n==0)
        return SUM;
    sum(--n);
}
