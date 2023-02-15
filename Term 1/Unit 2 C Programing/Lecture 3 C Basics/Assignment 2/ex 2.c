
/*
The question is : 
 Write C Program to Check vowel or constant 
*/
#include <stdio.h>
int main()
{
    
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c",&alpha);
    if (alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u')
        printf("%c is a vowel.", alpha);
    else
        printf("%c is a constant. ",alpha);
       
}