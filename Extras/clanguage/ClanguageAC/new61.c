#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    struct student s2;
    struct student s3;

    s1.roll = 123;
    s2.roll = 345;
    s3.roll = 645;

    s1.cgpa = 8.9;
    s2.cgpa = 9.4;
    s3.cgpa = 8.7;

    strcpy(s1.name, "Student1");
    strcpy(s2.name, "Student2");
    strcpy(s3.name, "Student3");

    printf("Student name = %s\n", s1.name);
    printf("Student name = %s\n", s2.name);
    printf("Student name = %s\n", s3.name);

    printf("Student roll no. = %d\n", s1.roll);
    printf("Student roll no. = %d\n", s2.roll);
    printf("Student roll no. = %d\n", s3.roll);

    printf("Student cgpa =%.2f\n", s1.cgpa);
    printf("Student cgpa =%.2f\n", s2.cgpa);
    printf("Student cgpa =%.2f\n", s3.cgpa);

    return 0;
}
