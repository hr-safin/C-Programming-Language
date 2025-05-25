#include<stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    

    for(int i =1; i<=2*N-1; i++){
        int L_index;

        if(i<=N){
            L_index = i;
        }else{
            L_index = (2*N - 1) - i + 1;
        }

        int spaces = N - L_index;
        for(int m = 0; m<spaces; m++){
            printf(" ");
        }
        
        char smbl;

        if(L_index % 2 ==1){
            smbl = '#';
        }else{
            smbl = '-';
        }

        int counter = 2 * L_index - 1;
        
        int l =0;
        while(l<counter){
            printf("%c", smbl);
            l++;
        }
        printf("\n");

    }

    return 0;
}