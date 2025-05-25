#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s", s);

    int length = strlen(s);
    int count = 0;
    for(int i =0; i<=length; i++){
         printf("%s--%d\n", s[i], count);
    }
    return 0;
}