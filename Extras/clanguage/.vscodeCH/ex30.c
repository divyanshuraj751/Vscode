#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int *arrayptr = arr;
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("value at position 3 of the array is %d\n", arr);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", &arr + 1);
    arrayptr++;
    
    printf("The value at address of first element of the array is %d\n",*( arr));
    printf("The value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of the second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of the second element of the array is %d\n", *(arr + 1)); 


    return 0;
}