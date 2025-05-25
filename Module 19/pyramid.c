#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int stars = 1;
    int space = N;

    for(int i =1; i<=N; i++){ // for printing lines
        // for space
        for(int m = 0; m<space; m++){
            printf(" ");
        }
        for(int j =1; j<=stars; j++){
            printf("*");
        }
        printf("\n");
        stars+=2;
        space--;
    }
    return 0;
}