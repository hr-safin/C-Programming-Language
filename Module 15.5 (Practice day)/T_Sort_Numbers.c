#include<stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int arr[3] = {A, B, C};
    int original[3] = {A, B, C}; // Store original order
    int len = 3; // Fixed length for 3 elements
    
    // Bubble sort for ascending order
    for(int i = 0; i < len-1; i++) {
        for(int j = 0; j < len-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print sorted order
    for(int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
    
    printf("\n"); // Blank line
    
    // Print original order
    for(int i = 0; i < len; i++) {
        printf("%d\n", original[i]);
    }
    
    return 0;
}