#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s", &s);

    int length = strlen(s);

    for(int i =0; i<=length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
            length -=1;
        }  
    }

    printf("%d\n",length);
    return 0;
}