#include <stdio.h>

void tree(int n) {

    int totalStar;

    
    if (n == 1){
        totalStar = 6;
    } 
    else if (n == 3){
        totalStar = 7;
    } 
    else if (n == 5){
        totalStar = 8;
    } 
    else if (n == 7){
        totalStar = 9;
    } 
    else if (n == 9){
        totalStar = 10;
    } 
    else if (n == 11){
        totalStar = 11;
    } 
    else if (n == 13){
        totalStar = 12;
    } 
    else if (n == 15){
        totalStar = 13;
    } 
    else if (n == 17){
        totalStar = 14;
    } 
    else if (n == 19){
        totalStar = 15;
    } 
    else if (n == 21){
        totalStar = 16;
    } 
    else{
        return;
    } 

    int strs = 2 * totalStar - 1;

    for (int i = 0; i < totalStar; i++) {
        int str = 2 * i + 1;

        int space = (strs - str) / 2;

        for (int j = 0; j < space; j++){
            printf(" ");
        } 
        for (int k = 0; k < str; k++){
            printf("*");
        } 
        printf("\n");
    }

    int verticalspace = (strs - n) / 2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < verticalspace; j++){
            printf(" ");
        } 
        for (int m = 0; m < n; m++){
            printf("*");
        } 

        printf("\n");
    }
}

int main() {
    int X;
    scanf("%d", &X);
    tree(X);

    return 0;
}
