#include<stdio.h>

int factorial(int num){

    if(num == 0){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
}
int main(){
    
    int Num;
    scanf("%d", &Num);
    printf("The factorial of %d is %d", Num, factorial(Num));
    return 0;
}