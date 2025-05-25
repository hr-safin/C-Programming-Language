#include<stdio.h>


void fun(int x){
  x = 20;
  printf("fun function x address %p\n", &x);
}
int main(){
    
    int x = 10;
    fun(x);
    printf("main function x address %p", &x);
    return 0;
}