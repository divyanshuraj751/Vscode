#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name\n");
    scanf("%s", &name);
    printf("Enter age\n");
    scanf("%d", &age);
    printf("Enter cgpa\n");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name %s\n", name);
    fprintf(fptr,"student age %d\n", age);
    fprintf(fptr,"student cgpa %f\n", cgpa);

    fclose(fptr);
    return 0;
}