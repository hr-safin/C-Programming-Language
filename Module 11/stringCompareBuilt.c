#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int val = strcmp(a,b);

    if(val<0){
        printf("A is smaller");
    }else if (val>0)
    {
        printf("B is smaller");
    }else if (val == 0)
    {
        printf("both are equal");
    }
    return 0;
}