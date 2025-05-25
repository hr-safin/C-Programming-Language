#include<stdio.h>


//No return + parameter function

void sum(){
    
    int x = 20;
    printf(" sum -- > %d", x);
}

int main(){
    
    int x = 10;
    printf(" main -- > %d\n", x);
    sum();
    return 0;
}