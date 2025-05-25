#include<stdio.h>
#include<string.h>

int main(){
    char s[100001];
    scanf("%s", s);

    int length = strlen(s);
    int consonantR = length;


    for(int i =0; i<=length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
            consonantR -= 1;
        }  
    }

    printf("%d",consonantR);
    return 0;
}