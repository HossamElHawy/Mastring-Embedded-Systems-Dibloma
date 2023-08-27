
/*
--------------------------------------------------------------------------------------------
The question is :
  Write a program in C to print a string in reverse using a pointer
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 21/8/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#define True 1

int main()
{
    char str[100];
    printf("Input a string : ");
    fgets(str, sizeof(str), stdin);
    char *ptr = str + strlen(str) - 1;
    printf("Reverse of the string is : ");
    while (ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }
}
