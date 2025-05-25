#include<stdio.h>


int add(int a, int b) {

    int addition = a + b;
    return addition;
}

int main(){

    int A, B;
    scanf("%d %d", &A, &B);
    
    int result = add(A,B);
    printf("%d", result);
    return 0;
}