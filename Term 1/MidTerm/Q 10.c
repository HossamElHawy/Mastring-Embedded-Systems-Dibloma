
/*
--------------------------------------------------------------------------------------------
The question is :
  Write c function to count the max number of ones between two zeros
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Mid Term Answer
Date     : 28/3/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
int MAX = 0;
void max_ones(char str[],int len);
int main()
{
    char str[100];
    gets(str);
    max_ones(str, strlen(str));
    printf("%d", MAX);
}
void max_ones(char str[], int len)
{
    int count = 0, check = 0;
    for (int i = 0; i < len;i++)
    {
        if(str[i]!='0' || str[i]!='1')
        continue;
        if(str[i]=='0' && check==0)
        {
            check = 1;
        }
        if(str[i]=='1')
            count++;
        if(str[i]=='0' && check==1)
        {
            if(count>=MAX)
                MAX = count;
            count = 0;
        }
    }

}
