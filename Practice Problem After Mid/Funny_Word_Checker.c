#include<stdio.h>
#include<string.h>
int main(){
    
    char s[101];
    scanf("%s", s);

    char m[101];
    strcpy(m,s);

    int len = strlen(m);

   
    if(len > 0){
        char temp = m[0];
        m[0] = m[len - 1]; 
        m[len - 1] = temp;
    }

    int result = strcmp(m,s);

    if(result > 0 || result < 0){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    
    return 0;
}