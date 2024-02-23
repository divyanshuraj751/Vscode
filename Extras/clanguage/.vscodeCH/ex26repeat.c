#include <stdio.h>
int main()
{
    int marks[2][4] = {{10, 99, 98, 97},
                     {86, 43, 56, 78}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of array is %d\n", i, j, marks[i]);
        }
        printf("\n");
    }
    return 0;
}