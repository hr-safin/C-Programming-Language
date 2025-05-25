#include<stdio.h>

int main(){
    
    int n;
    scanf("%d ", &n);
    int arr[n];

    for(int i =0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int x =0, y =n-1; x<y; x++, y--){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    // int x = 0,y = n-1;
    // while(x<y){
    //     int temp = arr[x];
    //     arr[x] = arr[y];
    //     arr[y] = temp;
    //     x++;
    //     y--;
    // }

    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}