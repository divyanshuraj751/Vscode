#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()  {
    struct student s1 = {234,8.0, "Divyanshu"};
    printf("student.roll =%d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student.roll with ptr = %d\n", (*ptr).roll);
    printf("student->roll = %d\n",ptr->roll);
    printf("student->name = %s\n", ptr->name);
    printf("student->cgpa = %.2f\n", ptr->cgpa);
    return 0;
}