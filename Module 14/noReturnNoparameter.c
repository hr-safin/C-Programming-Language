#include<stdio.h>


//No return + parameter function

void sum(){
    
    int a, b;
    scanf("%d %d", &a,&b);
    int add = a + b;
    printf("%d", add);
}

int main(){
    
    sum();
    return 0;
}