#include<stdio.h>

int summation(int a, int b){

    int add = a + b;
    return add;
}

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", summation(a,b));

    return 0;
}