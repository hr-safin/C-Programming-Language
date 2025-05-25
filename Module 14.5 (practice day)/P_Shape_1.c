#include<stdio.h>

int main(){
    
    int N;
    int star =1;
    scanf("%d", &N);

    for(int i =1; i<=N; i++){
        for(int j =N + 1; j>i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}