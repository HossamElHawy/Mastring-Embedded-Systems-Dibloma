
/*
The question is : 
 Write C Program to check whether a character is alphabet or not. 
*/
#include <stdio.h>
int main()
{
    char character;
    int ascii_char;
    printf("Enter a character : ");
    scanf("%c", &character);
    // In this step we convert the character into its ascii code
    ascii_char = character;
    if((ascii_char >=97 && ascii_char <=122) || (ascii_char >=65 && ascii_char <=90))
        printf("%c is an alphabet.", character);
    else
        printf("%c is not an alphabet.", character);
}
