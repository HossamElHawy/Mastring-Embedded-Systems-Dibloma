
/*
The question is : 
 Write C Program to find factorial of a number. 
*/
#include <stdio.h>
int main()
{
   int num,factorial=1;
   printf("Enter an integer : ");
   scanf("%d",&num);
   if(num<0)
   {
     printf("Erorr !!! Factorial of negative number doesn't exist ");
     return 0;
   }

   for(int i=1;i<=num;i++)
    factorial*=i;
   printf("Factorial = %d",factorial);  
}
