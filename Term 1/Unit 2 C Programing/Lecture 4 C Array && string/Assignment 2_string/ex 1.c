
/*
The question is :
 Write C Program to find the frequency of character in astring  
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],character;
    int count = 0;
    printf("Enter a string : ");
    gets(string);
    printf("Enter a character to find frequency : ");
    scanf("%c", &character);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]==character)
            count++;
    }
    printf("Frequency of %c is = %d", character, count);
}
