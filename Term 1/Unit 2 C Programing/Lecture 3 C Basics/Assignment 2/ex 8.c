
/*
The question is : 
 Write C Program to make asimple calculator. 
*/
#include <stdio.h>
int main()
{
  char operator;
  float a,b;
  printf("Enter operatop (+,-,*,/) : ");
  scanf("%c",&operator);
  printf("Enter tow operands: ");
  scanf("%f%f",&a,&b);
  if(operator=='+')
      printf("%f + %f = %f", a, b, a + b);
  else if(operator == '*')
      printf("%f * %f = %f", a, b, a * b);
  else if (operator== '/')
      printf("%f / %f = %f", a, b, a / b);
  else if (operator== '-')
      printf("%f - %f = %f", a, b, a - b);
  else
      printf("Erorr! Chose another operator");
}
