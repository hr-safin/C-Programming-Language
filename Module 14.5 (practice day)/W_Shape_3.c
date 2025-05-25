#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    int space = N - 1;
    int star = 1;

    for(int i =1; i<=N; i++){
        for(int m =0; m<space; m++){
            printf(" ");
        }
        for(int j =1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star +=2;
        space--;

    }
    int space2 = 0;
    for(int i = 1; i<=2*N -1; i++){
       
        for(int j = star-1; j>1; j--){
             printf("*");
        }
        printf("\n");
         for(int m = 0; m<=space2; m++){
            printf(" ");
        }
        space2++;
        star -=2;

        
    }
    return 0;
}