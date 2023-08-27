
/*
--------------------------------------------------------------------------------------------
The question is :
  Write a program in C to show a pointer to an array which contents
are pointer to structure.
--------------------------------------------------------------------------------------------
Author   : Hossam El Hawy
Subject  : Assignment Answer
Date     : 21/8/2023
--------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#define True 1

// Define the structure for employee information
struct Employee {
    char name[50];
    int id;
};

int main() {
    // Define an array of pointers to struct Employee
    struct Employee *employeePointers[2];

    // Create instances of struct Employee and assign to the pointers
    struct Employee employee1 = {"Alex", 1002};
    struct Employee employee2 = {"Ali", 1003};

    employeePointers[0] = &employee1;
    employeePointers[1] = &employee2;

    // Access and print the data through the pointer
    printf("Employee Name: %s\n", employeePointers[0]->name);
    printf("Employee ID: %d\n", employeePointers[0]->id);

    return 0;
}




