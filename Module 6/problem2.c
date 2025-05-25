#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    int num;

    for(int i = 1; i<=N; i++){
        scanf("%d", &num);

        if(num % 2 == 0){
            even++;
        }

        if(num % 2 != 0){
            odd++;
        }
        
        if(num>0){
            positive++;
        }
        if(num<0){
            negative++;
        }

    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}