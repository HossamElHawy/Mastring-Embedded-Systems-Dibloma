
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
    int n;

    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &n);

    int arr[15];

    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("element - %d : %d\n", arr[i]-1, arr[i]);
    }

    return 0;
}
