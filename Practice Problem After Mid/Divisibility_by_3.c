#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);


    char s[N + 1];
    scanf("%s", s);

    int sum;

    

    for(int i =0; i<N; i++){
        sum += s[i];
    }
   
    if(sum % 3 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}