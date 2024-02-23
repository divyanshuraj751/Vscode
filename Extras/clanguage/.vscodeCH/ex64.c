#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr =fopen("myfile1.txt", "w");
    fputc('o',ptr);        //this will write o is myfile1.txt
    fputs("This is divyanshu",ptr);   //this will write This is divyanshu in myfile1.txt
    return 0;
}