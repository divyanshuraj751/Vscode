#include <stdio.h>

int main()
{
    int i, num;
    for(int i = 0; i < 7; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 5; j++)
        {
            printf("Enter a number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }

    }
    end:
    return 0;
}