
/*
The question is :
 Write C Program to insert an element in an array
*/
#include <stdio.h>
int main()
{
    int size, element, pos, check = 0;
    printf("Enter The Number of Elements :");
    scanf("%d",&size);
    int array[size], box[size + 1];
    for (int i = 0; i < size;i++)
    {
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be inserted : ");
    scanf("%d", &element);
    printf("Enter the position : ");
    scanf("%d", &pos);
    for (int i = 0; i <= size; i++)
    {
        int x = i;
        if(check)
            x--;
        if(i==pos-1)
        {
            box[i] = element;
            check = 1;
            continue;
        }
        box[i] = array[x];
    }
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", box[i]);
    }
}    

