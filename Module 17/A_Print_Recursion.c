#include<stdio.h>


void printLove(int N){
    
    if(N <= 0){
        return;
    }
    printf("I love Recursion\n");
    printLove(N-1);
}
int main(){
    
    int N;
    scanf("%d",&N);
    printLove(N);
    return 0;
}