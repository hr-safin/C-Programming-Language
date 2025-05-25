#include<stdio.h>

int main(){
    int N;
    scanf("%d ", &N);

    int arr[N];
    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    int left = 0;
    int right = N - 1;
    int is_palindome = 1;

    while(left < right){
        if(arr[left] != arr[right]){
            is_palindome = 0;
            break;
        }else{
            left++;
        right--;
        }  
    }

    if(is_palindome){
        printf("YES\n");
    }

    else{
        printf("NO\n");
    }

    return 0;
}