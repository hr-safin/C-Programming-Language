#include<stdio.h>

int main(){
    int T;
    scanf("%d\n", &T);

    while(T--){
        int M1, M2, D;
        scanf("%d %d %d\n", &M1, &M2, D);
        int lessDay = M2 - ((M1 * M2)/M2);
        printf("%d\n", lessDay);
    }
    return 0;
}