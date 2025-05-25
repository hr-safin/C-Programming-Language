#include<stdio.h>

int main(){
    
    int N, T;
    scanf("%d", &T);
    while (T--)
    {   
        scanf("%d", &N);
        long long int fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact *=  i;
        }
        
        printf("%lld\n", fact);
    }
    
    
    
    return 0;
}