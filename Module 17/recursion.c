#include<stdio.h>


void Hello(){
    printf("Hello\n");
    Hello();
}
int main(){
    printf("Hi\n");
    Hello();
    return 0;
}