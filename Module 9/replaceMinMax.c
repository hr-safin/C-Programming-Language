#include<stdio.h>

int main(){
    int N;
    scanf("%d ", &N);
    int arr[N];

    int min;
    int max;

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }
    
    for(int i =0; i<N; i++){
            printf("%d ", arr[i]);
    }


    return 0;
}