#include<stdio.h>


void printNumbers(int N, int i){
    
    int limit = N+1;
    if(i == limit){
        return;
    }

    printNumbers(N, i+1);
    printf("%d", i);
    if( i != 1) printf(" ");
}
int main(){
    int N;
    scanf("%d", &N);
    int i =1;
    printNumbers(N, i);
    return 0;
}