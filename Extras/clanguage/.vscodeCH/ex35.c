#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'D','i','v','y','a','n','s','h','u','\0'};
    char str[] = "Divyanshu";
    printstr(str);
    return 0;
}