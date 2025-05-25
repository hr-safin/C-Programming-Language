#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];





    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    int highestSalami = arr[0];
    for(int i =1; i<N; i++){
        if(arr[i] > highestSalami){
             highestSalami = arr[i];
        }
    }

    for(int i =0; i<N; i++){
        printf("%d ", highestSalami - arr[i]);
    }


    return 0;
}