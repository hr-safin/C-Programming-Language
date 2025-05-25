#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int val = 1;
    int space = N - 1;

    for(int i =N; i>=1; i--){
        
        //space
        for(int j = 1; j<=space; j++){
            printf(" ");
        }
        for(int j = 1; j<=val; j++){
            printf("* ");
        }
        printf("\n");
        val++;
        space--;
    }
    return 0;
}