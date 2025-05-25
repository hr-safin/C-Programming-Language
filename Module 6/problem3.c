#include<stdio.h>

int main(){
    

    int correctPassword = 1999;
    int num;
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        if(num == correctPassword){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}