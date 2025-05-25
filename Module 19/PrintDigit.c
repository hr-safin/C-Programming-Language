#include <stdio.h>

void rec(int N)
{

    if (N == 0)
    {
        return;
    }
    rec(N / 10);
    int LastOne = N % 10;
    printf("%d ", LastOne);
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        if(N == 0){
            printf("0");
        }
        rec(N);
        printf("\n");
    }

    return 0;
}