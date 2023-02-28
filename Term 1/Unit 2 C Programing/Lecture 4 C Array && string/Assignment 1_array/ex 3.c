
/*
The question is :
 Write C Program to find transpose of a matrix
*/
#include <stdio.h>
int main()
{
    int row,column;
    printf("Enter rows and column of matrix : ");
    scanf("%d%d",&row,&column);
    int matrix[row][column];
    printf("Enter elements of matrix :\n");

    //************* Lets Enter the elements of the matrix**********

    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element a[%d][%d] : ", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%d", &matrix[i][j]);
        }
    }

    //********** Lets print The matrix after entering it************
    
    printf("Enterd matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    //********************* The Transpose **************************

    printf("Transpose of matrix : \n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}
