#include<stdio.h>


void printNumbers(int arr[], int N, int i){
    
    if(i == N){
        return;
    }

    printNumbers(arr, N, i + 1);
    if(i % 2 == 0){
        printf("%d ", arr[i]);
    }
    
}
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i=0; i<N; i++){
        scanf("%d ", &arr[i]);
    }
    int i =0;

    printNumbers(arr, N, i);
    return 0;
}