#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    char str[4];
    fgets(str, 5, ptr);    //5 means 4 character from myfile.txt is printed
    printf("The string is %s\n", str);
    fclose(ptr);
    return 0;
}