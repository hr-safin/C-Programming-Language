#include<stdio.h>


long long int rec(int N){

    if(N == 1){
        return 1;
    }
    long long int multiply =  rec(N-1);
    return N * multiply;
    
}
int main(){
    int N;
    scanf("%d", &N);
    long long int total = rec(N);
    printf("%lld", total);
    return 0;
}