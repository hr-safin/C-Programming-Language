#include<stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    // Read the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (row != col) {
        printf("Not square matrix, so it won't be a scalar matrix as well\n");
        return 0;
    }

    // Check if it's a scalar matrix
    int first_diagonal = arr[0][0]; // Store the first diagonal element
    int is_scalar = 1; // Assume it's scalar initially

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                // Diagonal elements must be equal to first_diagonal
                if (arr[i][j] != first_diagonal) {
                    is_scalar = 0;
                    break;
                }
            } else {
                // Non-diagonal elements must be zero
                if (arr[i][j] != 0) {
                    is_scalar = 0;
                    break;
                }
            }
        }
        if (!is_scalar) break;
    }

    if (is_scalar) {
        printf("Scalar matrix\n");
    } else {
        printf("Not a scalar matrix\n");
    }

    return 0;
}