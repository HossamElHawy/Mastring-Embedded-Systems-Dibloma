
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to return unique number in array with one loop
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size;i++)
        scanf("%d", &arr[i]);
    //Sorting The Array----------
    qsort(arr, size, sizeof(int), cmpfunc);
    // Finding the unique---------------
    int unique = arr[0],count;
   
    for (int i = 1; i < size; i+=2)
    {
        count = i;
        if(arr[i]!=arr[i-1])
        {
            unique = arr[i-1];
            break;
        }
    }
    if(count!=0 && size>=4)
        unique = arr[size - 1];
    printf("%d", unique);
   
}
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}