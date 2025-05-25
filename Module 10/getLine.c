#include<stdio.h>

int main(){
    
    char s[1000001];
    scanf("%s", &s);

    int length = strlen(s);
    int total = 0;

    for(int i =0; i<length; i++){
        total += s[i] - '0';
        // printf("%c", s[i]);
    }

    printf("%d", total);
    return 0;
}