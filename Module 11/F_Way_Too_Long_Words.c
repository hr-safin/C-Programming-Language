#include<stdio.h>
#include<string.h>
int main(){
    
    int T;
    scanf("%d\n", &T);

    while(T--){
        char word[101];
        scanf("%s", word);
        int length = strlen(word);

        if(length<=10){
            printf("%s\n", word);
        }
        else{
            printf("%c%d%c\n", word[0],length-2,word[length-1]);
        }
    }
    return 0;
}