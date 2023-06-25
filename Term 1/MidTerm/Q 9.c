
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to reverse words in string
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int check = 0;
void revers(char str[],int len);
int main()
{
    char str[50];
    gets(str);
    revers(str, strlen(str));
}
void revers(char str[],int len)
{
    for (int i = 0; i < len;i++)
    {
        int ascii = (int)str[i];
        if (((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) && check==0)
            continue;
        else
        {
            //gump the space inside the names ---------------
            if(check==0)
            {
                i++;
                check = 1;
            }
            printf("%c", str[i]);
        }
     }
     printf(" ");
     for (int i = 0; i < len; i++)
     {
        int ascii = (int)str[i];
        if (((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) && check == 1)
        {
            printf("%c", str[i]);
        }
        else
        {
            
           break;
        }
     }
}
