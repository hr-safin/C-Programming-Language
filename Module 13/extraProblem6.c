#include<stdio.h>

int main(){
    
    int N;
    char c = 'A';
    scanf("%d", &N);

    for(int i = 1; i<=N; i++){
        for(int j =1; j<=i; j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}