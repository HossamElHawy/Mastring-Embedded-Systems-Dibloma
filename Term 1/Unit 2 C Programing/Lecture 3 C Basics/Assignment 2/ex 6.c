
/*
The question is : 
 Write C Program to calculate sum of natural numbers. 
*/
#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter an integer : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
      sum+=i;
    printf("Sum = %d",sum); 

}
