#include<stdio.h>

int main(){
    int N;
    scanf("%d ", &N);
    int arr[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }
    
    int count[55] = {0};
    for(int i =0; i<N; i++){
            int val = arr[i];
            count[val]++;   
    }

    for(int i =0; i<55; i++){
        printf("%d --> %d\n", i, count[i]);
    }
    return 0;
}