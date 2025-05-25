#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);

    for(int i = 1; i<=N; i++){

        if(N % i == 0 && i>0){
            printf("%d\n", i);
        }
    }
    return 0;
}