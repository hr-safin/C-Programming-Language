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

    
    int flag = 100;
    if(row == col){
        for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(i == j){
                // we are at the diagonal
            }else{
                if(arr[i][j] != 0){
                    flag = 200;
                    printf("This is not diagonal matrix\n");
                }
            }
        }
        if(flag == 100){
            printf("This is a primary diagonal matrix");
        }
    }
    }else{
        printf("This is not square matrix so it won't be primary diagonal matrix");
    }
    return 0;
}