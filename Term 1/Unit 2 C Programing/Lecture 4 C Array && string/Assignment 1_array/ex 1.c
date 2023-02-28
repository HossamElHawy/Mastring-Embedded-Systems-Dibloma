
/*
The question is :
 Write C Program to find sum of tow matrix of order 2*2
*/
#include <stdio.h>
int main()
{
    float matrix1[2][2], matrix2[2][2];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d] :", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &matrix1[i][j]);
        }
    }
        //****************** 2st Matrix ***************
    printf("Enter the elements of 2st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b[%d][%d] :", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &matrix2[i][j]);
        }
    }

    // **************** Summing *************
    printf("Sum of Matrix : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%0.2f    ",matrix1[i][j]+matrix2[i][j]);
            
        }
        printf("\n");
    }
}
