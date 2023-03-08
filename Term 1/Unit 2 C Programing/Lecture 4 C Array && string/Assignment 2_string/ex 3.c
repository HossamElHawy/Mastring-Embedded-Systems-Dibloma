
/*
The question is :
 Write C Program to reverse string with out library in functions  
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int length = 0;
    printf("Enter a string : ");
    gets(string);
    //********** Lets Find The Length of The String **********
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]!='/0')
            length++;
    }
    //*********** Now Lets Reverse The String ********
    printf("Reverse String is : ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c",string[i]);
    }
}
