#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    int A[N];
    
    int left_idx = 0;
    int right_idx = N -1;
    int isPalindromes = 1;

    for(int i =0; i<N; i++){
        scanf("%d ", &A[i]);
    }

    while(left_idx < right_idx){
        if(A[left_idx] != A[right_idx]){
            isPalindromes = 0;
            break;
        }
        left_idx++; 
        right_idx--;
    }

    if(isPalindromes){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}