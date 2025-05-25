#include<stdio.h>

int main(){
    
    int N; 
    int stars =1;

    scanf("%d", &N);
    for(int i =1; i<=N; i++){
        for(int j =N; j>=stars; j--){
            printf("*");
        }
        printf("\n");
        stars++;
    }
    return 0;
}