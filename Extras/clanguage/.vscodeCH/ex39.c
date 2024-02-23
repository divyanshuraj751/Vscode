#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 234;
    ravi.marks = 453;
    shubham.marks = 345;
    harry.fav_char = 'a';
    ravi.fav_char = 'a';
    shubham.fav_char = 'a';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Potter student of the year");
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry's name is: %s\n", harry.name);
    printf("shubham got %d marks\n", shubham.marks);
    printf("shubham's name is: %s\n", shubham.name);

    return 0;
}