
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c program Explaine the pointer in c
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 21/8/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int m,*ab;
    m=29;
    printf("Address of m : %x\nValue of m : %d\n", &m, m);
    printf("Now ab is assigned with the address of m.\n");
    ab = &m;
    printf("Address of pointer ab : %x\nContent of pointer ab : %d\n", ab,*ab);
    printf("The value of m assigned to 34 now\n");
    m = 34;
    printf("Address of pointer ab : %x\nContent of pointer ab : %d\n", ab, *ab);
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m : %x\nValue of m : %d\n", &m, m);
}
