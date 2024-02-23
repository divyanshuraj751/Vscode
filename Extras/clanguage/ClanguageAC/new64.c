#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);

int main() {
    struct student s1 = {342, 9.5, "Divyanshu"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1) {
    printf("Student information\n");
    printf("student.roll = %d\n", s1.roll);
    printf("student.name = %s\n", s1.name);
    printf("student.cgpa = %.2f\n", s1.cgpa);
}
