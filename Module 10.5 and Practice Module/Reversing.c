#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    int A[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &A[i]);
    }

    for(int x = 0, y = N-1; x<y; x++,y--){
        int temp = A[x];
        A[x] = A[y];
        A[y] = temp;
    }

    for(int i =0; i<N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}