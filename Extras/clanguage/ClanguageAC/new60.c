#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll = 222;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Divyanshu");
    printf("Student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("Studenmt cgpa = %.2f\n", s1.cgpa);
    return 0;
}