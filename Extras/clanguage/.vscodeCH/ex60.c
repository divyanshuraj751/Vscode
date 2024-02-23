#include <Stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by ex60.c";

    ptr = fopen("myfile1.txt", "w");
    fprintf(ptr, "%s", string);
    
    return 0;
}