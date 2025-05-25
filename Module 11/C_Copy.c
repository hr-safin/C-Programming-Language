#include<stdio.h>
#include<string.h>
int main(){
    char x[21], y[21];
    scanf("%s %s", x, y);
    int len = strlen(y);
    for(int i =0; i<=len; i++){
            x[i + len] = y[i];
    }

    printf("%s ", x);
    return 0;
}