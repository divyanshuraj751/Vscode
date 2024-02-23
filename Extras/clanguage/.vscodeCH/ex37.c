#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Divyanshu";
    char s2[] = "harry";
    char s3[54];
    // puts(strcat(s1,s2));
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    printf("The reversed string s1 is : ");
    puts(strrev(s1));
    printf("The reversed string s2 is : ");
    puts(strrev(s2));

    strcpy(s3, strcat(s1, s2));
    puts(s3);

    return 0;
}