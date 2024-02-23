#include <stdio.h>
int main() {

    int i,j,k,l,m,n;
    printf("Enter the rows for first matrix\n");
    scanf("%d", &m);

    printf("Enter the column for second matrix\n");
    scanf("%d", &n);
    
    int arr[m][n];
    
    printf("Multiplication of Matrix\n");
    printf("For First Matrix\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("Enter the %d element of matrix of %d row\n",j,i);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the rows for first matrix\n");
    scanf("%d", &m);

    printf("Enter the column for second matrix\n");
    scanf("%d", &n);

    int arr[k][l];

    printf("For second matrix\n");
    for(k=0;k<3;k++) {
        for(l=0;l<3;l++) {
            printf("Enter the %d element of matrix of %d row\n",l,k);
            scanf("%d", &arr[k][l]);
        }
    }

    for(int j=1;j<=m;j++) {
        for(int k=1;k<=n;k++) {
            arr[j]*arr[k] += arr[j]*arr[k];
        }
    }

    /*printf("The matrix is:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/

    return 0;
}