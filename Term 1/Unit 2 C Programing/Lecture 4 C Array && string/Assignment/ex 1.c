
/*
The question is :
 Write C Program to Check Whether anumber is even or odd
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer you want to check: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
}
