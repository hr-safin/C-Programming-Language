#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    int arr[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    int left = 0; 
    int right = N - 1;
    int isPalindromes = 1;

    while(left < right){
        if(arr[left] != arr[right]){
            isPalindromes = 0;
            break;
        }
        left++;
        right--;
    }

    if(isPalindromes){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}