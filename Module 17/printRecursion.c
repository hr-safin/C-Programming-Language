#include<stdio.h>

void Hello(int i){
   
   if(i == 6){
    return;
   }
   printf("%d\n", i);
   Hello(i+1);
}
int main(){
    int i = 1;
    Hello(i);
    return 0;
}