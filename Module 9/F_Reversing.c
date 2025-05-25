#include<stdio.h>

int main(){
    int N;
    scanf("%d ", &N);
    int arr[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    for(int x =0, y = N-1; x<y; x++, y--){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    for(int i =0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}