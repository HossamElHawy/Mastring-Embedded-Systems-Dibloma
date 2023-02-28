
/*
The question is :
 Write C Program to find the length of the string  
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int count = 0;
    printf("Enter a string : ");
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]!='/0')
            count++;
    }
    printf("The length of string : %d",  count);
}
