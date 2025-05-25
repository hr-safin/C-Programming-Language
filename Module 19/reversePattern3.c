#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
     int star1 = N;

    for(int i =1; i<=N; i++){
        for(int j=1; j<=star1; j++){
            printf("*");
        }
        printf("\n");
        star1--;
    }
    return 0;
}