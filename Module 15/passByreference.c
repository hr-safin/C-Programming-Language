#include<stdio.h>


void fun(int* p){
  *p = 20; //deref
  // printf("fun function x address %p\n", &p);
}
int main(){
    
    int x = 40;
    fun(&x);
    printf("%d", x);
    return 0;
}