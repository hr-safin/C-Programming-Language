#include<stdio.h>

int main(){
    int N;
    int star =1;
    int space = N - 1;
    scanf("%d", &N);

    for(int i =1; i<=N; i++){

        //space printing
        for(int j =1; j<=space; j++){
            printf(" ");
        }
        for(int j =1; j<= star; j++){
            printf("*");
        }
        printf("\n");
        star +=2;
        space--;
    }
    return 0;
}