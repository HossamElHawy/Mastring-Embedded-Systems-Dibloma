
/*
The question is : 
Write Source Code to Swap Two Numbers
*/
#include <stdio.h>
int main()
{
   int a,b,box;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    box=a;
    a=b;
    b=box;
    printf("After swapping, value of a = %d\n",a);
    printf("After swapping, value of b = %d",b);
}