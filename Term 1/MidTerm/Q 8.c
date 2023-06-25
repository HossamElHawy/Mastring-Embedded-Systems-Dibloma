
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to take an array and revers its elements
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

void revers(int arr[],int size);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    revers(arr, size);
}
void revers(int arr[], int size)
{
    if(size==0)
        return;
    printf("%d ", arr[size - 1]);
    revers(arr, --size);
}
