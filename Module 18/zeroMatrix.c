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


    int totalvalue = row * col;
    int countZero = 0;

    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j] == 0){
                countZero++;
            }
        }
    }

    if(totalvalue == countZero){
        printf("this is Zero matrix");
    }else{
        printf("This is not Zero matrix");
    }
    return 0;
}