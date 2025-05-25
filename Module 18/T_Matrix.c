#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N][N];

    for(int i =0; i<N; i++){
        for(int j =0; j<N; j++){
            scanf("%d ", &arr[i][j]);
        }
    }

    
    
    
    int sumOfPrimary = 0;
    int sumOfSecond = 0;
    if(N == N){
        //square Matrix
        for(int i =0; i<N; i++){
        for(int j =0; j<N; j++){
            if(i == j){
                sumOfPrimary += arr[i][j];
            }
        }
    }

    for(int i =0; i<N; i++){
        for(int j =0; j<N; j++){
            if(i + j == N-1){
                sumOfSecond += arr[i][j];
            }
        }
    }
    }

    int totalSum = abs(sumOfPrimary - sumOfSecond);
    printf("%d", totalSum);
    return 0;
}