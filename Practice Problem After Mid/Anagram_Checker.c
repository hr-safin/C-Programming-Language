#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char word1[101], word2[101];
    scanf("%s %s", word1, word2);
    
    // Check if lengths are different
    if (strlen(word1) != strlen(word2)) {
        printf("No\n");
        return 0;
    }
    
    int freq1[ALPHABET_SIZE] = {0};
    int freq2[ALPHABET_SIZE] = {0};
    
    // Count frequencies in word1
    for (int i = 0; word1[i] != '\0'; i++) {
        freq1[word1[i] - 'a']++;
    }
    
    // Count frequencies in word2
    for (int i = 0; word2[i] != '\0'; i++) {
        freq2[word2[i] - 'a']++;
    }
    
    // Compare frequencies
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq1[i] != freq2[i]) {
            printf("No\n");
            return 0;
        }
    }
    
    printf("Yes\n");
    return 0;
}