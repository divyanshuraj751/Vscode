#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    printstr(str);
    printf("using printf %s\n", str);
    printf("Using puts: \n");
    printstr(str);
    return 0;
}