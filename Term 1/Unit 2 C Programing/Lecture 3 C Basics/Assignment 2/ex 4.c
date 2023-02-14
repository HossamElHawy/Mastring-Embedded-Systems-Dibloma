
/*
The question is : 
 Write C Program to check  whether a number is positive or negative 
*/
#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);
    if(num>0 )
      printf("%f is positive",num);
    else if(num<0)
      printf("%f is negative",num);
    else 
      printf("You enterd zero");
}
