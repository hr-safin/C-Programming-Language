#include <stdio.h>

int main() {

    int Test;
    scanf("%d", &Test);

    for(int i = 0; i<Test; i++){

        long long int X;
        int A, B, C;

        scanf("%lld %d %d %d", &X, &A, &B, &C);

        long long int mul = A * B * C;

        if (mul == 0) {

            if (X == 0) {

                printf("0\n");

            } 
            else {

                printf("-1\n");

            }

        } 
        else {
            if (X % mul == 0) {

                printf("%lld\n", X / mul);

            }
             else {
                printf("-1\n");
            }
        }
    }
   

    return 0;
}
