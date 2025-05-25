#include<stdio.h>

int main(){
    

    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];

    for(int i =0; i<N; i++){
        for(int j =0; j<M;  j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int is_present = 0;

    for(int i =0; i<N; i++){
        for(int j =0; j<M; j++){
            if(arr[i][j] == X){
                is_present = 1;
                break;
            }
        }
        if(is_present){
            break;
        }
    }

    if(is_present){
        printf("will not take number\n");
    }else{
        printf("will take number\n");
    }
    return 0;
}