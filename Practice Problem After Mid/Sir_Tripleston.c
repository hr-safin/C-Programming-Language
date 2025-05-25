#include <stdio.h>
#include <string.h>

int main() {
    char S[78]; // 77 characters + null terminator
    scanf("%s", S);
    
    int frequency[26] = {0}; // Initialize all counts to 0
    
    // Count each character's frequency
    for (int i = 0; S[i] != '\0'; i++) {
        frequency[S[i] - 'a']++;
    }
    
    // Find the letter with frequency 2
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == 2) {
            printf("%c\n", 'a' + i);
            break;
        }
    }
    
    return 0;
}