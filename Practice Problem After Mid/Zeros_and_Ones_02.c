#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i =1; i<=N; i++){
        scanf("%d ", &arr[i]);
    }
    int X;
    scanf("%d", &X);

    
    
    for(int i =1; i<=N; i++){
        if(arr[i] == 0){
            arr[X] = 1;
        }
        
        
    }

    for(int i =1; i<=N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}