
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to revers digits in number
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
void revers(int num);
int main()
{
    int num;
    scanf("%d", &num);
    revers(num);
}
void revers(int num)
{
    for (int i = 1; i < num;i*=10)
    {
        printf("%d",(num % (i * 10)) / i);
    }

}