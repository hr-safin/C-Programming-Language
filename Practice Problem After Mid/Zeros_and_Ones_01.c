#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int arr[N];

    int countZero = 0;
    int countOne = 0;

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i =0; i<N; i++){
       if(arr[i] == 0){
        countZero++;
       }
       else if(arr[i] == 1){
        countOne++;
       }
    }

    printf("%d %d", countZero, countOne);
    
    return 0;
}