#include <stdio.h>
#include <string.h>

int main() {
    char A[21], B[21];  // Size 21 to accommodate max length 10 + concatenation
    
    // Read input strings
    scanf("%s", A);
    scanf("%s", B);
    
    // Print sizes
    printf("%zu %zu\n", strlen(A), strlen(B));
    
    // Concatenate and print
    char concatenated[21];
    strcpy(concatenated, A);
    strcat(concatenated, B);
    printf("%s\n", concatenated);
    
    // Swap first characters
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);
    
    return 0;
}