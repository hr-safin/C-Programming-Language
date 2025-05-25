#include<stdio.h>

int main(){
    
    int N;
    int star = 1;
    scanf("%d", &N);

    for(int i =1; i<=N; i++){

        for(int j =5; j>=i; j--){
            printf("*");
        }
        printf("\n");
        // star +=2;
        // space++;

    }
    return 0;
}