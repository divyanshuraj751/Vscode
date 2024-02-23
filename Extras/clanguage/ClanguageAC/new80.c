#include <stdio.h>
#include <Stdlib.h>

int main() {
    float *ptr;
    ptr = (float*)calloc(5, sizeof(float));
    for(int i=0; i<5;i++) {
        printf("%f\n", ptr[i]);
    }
    return 0;
}