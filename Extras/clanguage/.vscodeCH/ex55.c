#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 45;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 45;
    ptr[1] = 67;
    ptr[2] = 67;
    ptr[3] = 67;
    free(ptr); // ptr is now a dangling pointer

    // case 2 : Function returning local variable address
    int * dangptr = functionDangling(); // ptr is now a dangling pointer
 
    int * danglingptr3;
    //case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingptr3 = &a;

    }   
    //Here variable a goes out of scope which means danglingptr3 is pointing
    //to a location which is freed and hence danglingptr3 is now a dangling 
    //pointer
    

    return 0;
}