#include<stdio.h>


void smallLarge(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }
   
    int smallNumber = arr[0];
    int largeNumber = arr[0];
    for(int i = 0; i<N; i++){
        if(arr[i] < smallNumber){
            smallNumber = arr[i];
        }

        if(arr[i] > largeNumber){
            largeNumber = arr[i];
        }
    }
    
    printf("%d %d", smallNumber, largeNumber);
}

int main(){
    
    smallLarge();
    return 0;
}