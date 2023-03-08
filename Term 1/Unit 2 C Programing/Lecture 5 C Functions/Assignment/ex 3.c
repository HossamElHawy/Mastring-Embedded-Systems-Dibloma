
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
void reverse(char str[]);
int length;
int main()
{
    char str[100];
    printf("Enter a sentence : ");
    gets(str);
    length = strlen(str);
    reverse(str);
}
// ------------This Is The Factorial Function --------------
void reverse(char str[])
{
    printf("%c", str[length--]);
    if(length<0)
        return;
    reverse(str);
}
