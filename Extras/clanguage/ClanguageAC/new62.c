#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[100];
    ece[0].roll = 132;
    ece[0].cgpa = 8.9;
    strcpy(ece[0].name,"Divyanshu");
    printf("name = %s\n", ece[0].name);
    printf("cgpa =%.2f\n", ece[0].cgpa);
    printf("roll = %d\n", ece[0].roll); 
    return 0;
}   