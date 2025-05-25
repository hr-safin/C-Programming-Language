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

    // Check if it's a square matrix
    if (row != col) {
        printf("Not square matrix so it wont be a unit matrix as well\n");
        return 0;
    }

    int is_unit = 1; // Assume it's a unit matrix initially

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                // Diagonal elements must be 1
                if (arr[i][j] != 1) {
                    is_unit = 0;
                    break;
                }
            } else {
                // Non-diagonal elements must be 0
                if (arr[i][j] != 0) {
                    is_unit = 0;
                    break;
                }
            }
        }
        if (!is_unit) break;
    }

    if (is_unit) {
        printf("Unit Matrix\n");
    } else {
        printf("Not unit Matrix\n");
    }

    return 0;
}