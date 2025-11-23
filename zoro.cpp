#include<stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

    // Input dimensions
    printf("Enter the dimension of arr1 (row & col): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the dimension of arr2 (row & col): ");
    scanf("%d %d", &m2, &n2);

    int arr1[m1][n1], arr2[m2][n2], result[m1][n2];

    // Input elements of arr1
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            printf("Enter value of arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements of arr2
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            printf("Enter value of arr2[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Print arr1
    printf("\narr1 =\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    // Print arr2
    printf("\narr2 =\n");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }

    // Check if multiplication is possible
    if(n1 != m2) {
        printf("\nMatrix multiplication not possible (columns of arr1 != rows of arr2).\n");
        return 0;
    }

    // Initialize result matrix to 0
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            for(k = 0; k < n1; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print result
    printf("\nProduct of arr1 and arr2 =\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

