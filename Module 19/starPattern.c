#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int star = 1;



    for(int i =1; i<=N; i++){  // for printing lines
        
        for(int j =1; j<=star; j++){ // for printing stars
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}