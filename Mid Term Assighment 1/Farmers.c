#include<stdio.h>

int main(){
    
    int T;
    scanf("%d", &T);
    
    int daysArray[T];
    

    for (int i =0; i<T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int n_days = (M1 * D) / (M1 + M2);
        daysArray[i] = D - n_days;
    }

    for(int i =0; i<T; i++){
        printf("%d\n", daysArray[i]);
    }
    
    return 0;
}