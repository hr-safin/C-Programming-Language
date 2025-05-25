#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){
  
    int is_palindrome = 1;
    int len = strlen(s);

    int i = 0;
    int j = len - 1;

    while(i < j){
        if(s[i] != s[j]){
            is_palindrome = 0;
        }

        i++;
        j--;
    }

    if(is_palindrome){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char s[10001];
    scanf("%s", &s);
    
    if(is_palindrome(s)){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    
    
    return 0;
}