#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int A[N];

    int countBy2 = 0;
    int countBy3 = 0;

    for(int i =0; i<N; i++){
        scanf("%d ", &A[i]);
    }

    for(int i =0; i<N; i++){
        if(A[i] % 2 == 0){
            countBy2++;
        }
        else if (A[i] % 3 == 0)
        {
            countBy3++;
        }

        else if (A[i] % 2 == 0 && A[i] % 3 == 0)
        {
            countBy2++;
        }
        
        
    }

    printf("%d %d\n", countBy2, countBy3);
    return 0;
}