
/*
The question is : 
Write C Program to Find ASCII Value of a Character
*/
#include <stdio.h>
int main()
{
    char x;
    int asci;
    printf("Enter a character: ");
    scanf("%c",&x);
    asci = x;
    printf("ASCII value of %c = %d",x,asci);
}