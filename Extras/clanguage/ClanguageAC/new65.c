#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

typedef struct electricalengineering {
    int roll;
    float cgpa;
    char name[100];
}coe;

int main() {
    coe s1;
    s1.roll = 123;
    s1.cgpa = 9.6;
    strcpy(s1.name, "Divyanshu");
    printf("student name is %s\n", s1.name);
    return 0;
}