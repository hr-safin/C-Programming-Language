#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s", &s);
    
    //shortcut to print the string lenght
    int length = strlen(s);

    printf("%d ", length);
    return 0;
}