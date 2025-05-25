#include<stdio.h>

int main()
{
    int X;
    for (;scanf("%d", &X);)
    {
        if(X == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}