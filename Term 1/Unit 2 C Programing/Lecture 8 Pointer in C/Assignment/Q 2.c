
/*
--------------------------------------------------------------------------------------------
The question is :
  Write a program in C to print all the alphabets using a pointer
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 21/8/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#define True 1

int main()
{
  char alphabets[26];
  char *ptr = alphabets;

  // Fill the array with alphabets
  for (int c = 65; c <= 90; c++)
  {
    *ptr = (char)c;
    ptr++;
  }

  // Reset the pointer to the start of the array
  ptr = alphabets;

  // Print the alphabets using the pointer
  while (True)
  {
    printf("%c ", *ptr);
    if(*ptr=='Z')
    break;
    ptr++;
  }
}
