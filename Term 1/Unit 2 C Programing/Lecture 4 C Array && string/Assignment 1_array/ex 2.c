
/*
The question is :
 Write C Program to calculate the average of array elements
*/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter The Number of Data :");
    scanf("%d",&size);
    float array[size],sum=0;
    for (int i = 0; i < size;i++)
    {
        printf("%d Enter Number : ", i + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f", &array[i]);
        sum += array[i];
    }
    printf("Average = %0.2f", sum / size);
}
