#include<stdio.h>

int main(){
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long int X = ((A * B) - (C * D));

    printf("Difference = %lld", X);
    return 0;
}