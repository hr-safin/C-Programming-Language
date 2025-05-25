#include<stdio.h>

int main(){
    
    char C;
    scanf("%c", &C);

    if(C == 'a' || C == 'e' || C == 'u' || C == 'i' || C == 'o'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant");
    }
    return 0;
}