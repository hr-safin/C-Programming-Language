#include<stdio.h>


void fun(char s[], int n){
   printf("%s\n",s);
   printf("%d", strlen(s));
}

int main(){
    
    char s[101];
    scanf("%s", &s);
    fun(s, 10);
    return 0;
}