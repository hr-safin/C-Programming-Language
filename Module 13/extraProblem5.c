#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int space = 0;       // Spaces increase as we go down
    int stars = 2*N - 1; // Stars decrease as we go down
    
    for(int i = 1; i <= N; i++) {
        // Print leading spaces
        for(int j = 0; j < space; j++) {
            printf(" ");
        }
        
        // Print stars
        for(int j = 1; j <= stars; j++) {
            printf("*");
        }
        
        printf("\n");
        space++;      // Increase spaces for next line
        stars -= 2;    // Decrease stars by 2 for next line
    }
    return 0;
}