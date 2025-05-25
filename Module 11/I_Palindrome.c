#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);

    int f_idx = 0;
    int l_idx = length - 1;
    int isPalindrome = 1;

    while(f_idx < l_idx){
          if(s[f_idx] != s[l_idx]){
            isPalindrome = 0;
            break;
          }
          f_idx++;
          l_idx--;
    }

    if(isPalindrome){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}