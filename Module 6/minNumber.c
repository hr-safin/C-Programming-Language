#include<stdio.h>
#include<limits.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int num;
    int min = INT_MAX;
    for(int i = 1; i<=N; i++){
        scanf("%d ", &num);
        if(num < min){
           min = num;
        } 

    }
    printf("%d", min); 
    return 0;
}