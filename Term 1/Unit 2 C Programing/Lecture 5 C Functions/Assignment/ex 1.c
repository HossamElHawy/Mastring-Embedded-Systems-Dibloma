
/*
--------------------------------------------------------------------------------------------
The question is :
  Write C Program To Print The Prime Numbers Betwen Two Intervals Using Function
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : C Functions
Date     : 7/3/2023
-------------------------------------------------------------------------------------------- 
*/
#include <stdio.h>
#include <string.h>
void prime(int x, int y);
int main()
{
    int x, y;
    printf("Enter two numbers (intervals) : ");
    scanf("%d%d", &x, &y);
    printf("The Prime numbers Betwen %d and %d are : ", x, y);
    prime(x, y);
}
// ------------This Is The Prime Function --------------
void prime(int x ,int y)
{
    for (int i = ++x; i < y;i++)
    {
        int check = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                check = 1;
                break;
            }
                
        }
        if (check == 0)
            printf("%d ", i);
    }
}
