
/*
The question is : 
 Write C Program to find the largest number among three numbers 
*/
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter Three Numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    if(a>=b && a>=c)
      printf("Largest Number = %f",a);
    else if(b>=a && b>=c)
      printf("Largest Number = %f",b);   
    else 
      printf("Largest Number = %f",c);
}
