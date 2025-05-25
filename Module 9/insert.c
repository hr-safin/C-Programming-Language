#include<stdio.h>

int main(){
    int N;
    scanf("%d ", &N);
    int arr[N+1];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    int idx,Y;
    scanf("%d %d", &idx, &Y);

    
    for(int i =N; i>=idx+1; i--){
        arr[i] = arr[i-1];
    }

    arr[idx] = Y;

    for (int i = 0; i <=N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}