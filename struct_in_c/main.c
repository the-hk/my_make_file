#include <stdio.h>
#include <string.h>
#include "main.h"

struct Person{
    char name[50];
    int number;
    int year;

}
person1;

int main(){
    function1();
    strcpy(person1.name, "Hamza Karakus");
    person1.number = 110110165;
    person1.year = 4;

    printf("Name: %s\n", person1.name);
    printf("ID number.: %d\n", person1.number);
    printf("Salary: %d\n", person1.year);

    function1();

}