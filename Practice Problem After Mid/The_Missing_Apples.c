#include<stdio.h>

int main(){
    
    int has, giv, bought;

    scanf("%d %d %d", &has, &giv, &bought );

    int afterGiving = has - giv;
    int nowHas = afterGiving + bought;

    printf("%d", nowHas);
    return 0;
}