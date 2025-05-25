#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];

    int sumOfPositive = 0;
    int sumOfNegative = 0;

    for(int i =0; i<=N; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i =0; i<N; i++){
      if(arr[i] >= 0){
        sumOfPositive += arr[i];
      }
      if (arr[i] < 0)
      {
        sumOfNegative += arr[i];
      }
      
    }
    printf("%d %d", sumOfPositive, sumOfNegative);

    
    return 0;
}