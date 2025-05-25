#include<stdio.h>

int main(){
    
    int N;
    scanf("%d\n", &N);

    int arr[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    int X;
    scanf("%d", &X);
    int flag = 0;
    for(int i =0; i<N; i++){

        for(int j = i+1; j<N; j++){
            if(arr[i] + arr[j] == X){
                flag = 1;
                printf("Yes %d %d\n", arr[i], arr[j]);
            }
        }
    }
    if(flag == 0){
        printf("No\n");
    }
   


    return 0;
}