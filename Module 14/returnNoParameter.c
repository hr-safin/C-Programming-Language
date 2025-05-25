#include<stdio.h>

int sum(){
    int A, B;
    scanf("%d %d", &A, &B);

    int add = A + B;
    return add;
}
int main(){
    
    printf("%d", sum());
    return 0;
}