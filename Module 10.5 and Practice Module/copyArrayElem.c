#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr1[N];
    for(int i =0; i<N; i++){
        scanf("%d ", &arr1[i]);
    }

    //second array
    int M;
    scanf("%d", &M);
    int arr2[M];
    for(int i =0; i<M; i++){
        scanf("%d ", &arr2[i]);
    }

    //copy array of first and second array
    int arr3[N+M];

    for(int i =0; i<N; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i<M; i++){
        arr3[i + N] = arr2[i];
    }

    for(int i =0; i<N+M; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}