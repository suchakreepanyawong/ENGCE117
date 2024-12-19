#include <stdio.h>

void GetMatrix(int value[], int *row, int *col);

int main() {
    int data[10000], m, n; // Assuming a maximum size for the matrix
    GetMatrix(data, &m, &n);

    if (m > 1 && n > 1) {
        printf("Matrix ( %d x %d ) : \n", m, n);
    } else {
        printf("Matrix : \n");
    } //end if

    if (m && n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", data[i * n + j]);
            } //end for

            printf("\n");
        } //end for
    } else {
        printf("( empty )");
    } //end if

    return 0;
} //end function

void GetMatrix(int value[], int *row, int *col) {
    printf("Enter the number of rows: ");
    scanf("%d", row);
    printf("Enter the number of columns: ");
    scanf("%d", col);

    int size = (*row) * (*col);

    if (size > 0) {
        printf("Enter the matrix elements: ");

        for (int i = 0; i < size; i++) {
            scanf("%d", &value[i]);
        } //end for
    } //end if
} //end function
