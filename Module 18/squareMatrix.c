#include<stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if(row == col){
        printf("this is square matrix");
    }else{
        printf("This is not square matrix");
    }
    return 0;
}