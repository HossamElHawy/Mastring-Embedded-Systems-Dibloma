
/*
The question is :
 Write C Program to search an element in array 
*/
#include <stdio.h>
int main()
{
    int size,num;
    printf("Enter The Number of Elements :");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size;i++)
    {
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &array[i]);
    }

    /*
        Note : The method will be used is a traditional , but ther is more efficient way 
        bt binary search....
    */
    printf("Enter the number to be searched : ");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if(array[i]==num)
        {
            printf("Number found in the location = %d", i + 1);
        }
    }
}
