#include <stdio.h>
int main()
{
    int marks[4] = {45,56,5,46};

    for(int i = 0; i< 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
    return 0;
}