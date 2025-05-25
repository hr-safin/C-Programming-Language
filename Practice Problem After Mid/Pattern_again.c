#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Upper half (left-aligned)
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    // Lower half (right-aligned decreasing)
    for(int i = N; i >= 1; i--) {
        // Print leading spaces
        for(int space = 0; space <= N - i; space++) {
            printf(" ");
        }
        // Print numbers
        for(int j = 1; j < i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}