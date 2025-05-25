#include<stdio.h>


void print_array(int arr[], int N, int i){
   
    if(i == N){
        return;
    }
    printf("%d\n", arr[i]);
    print_array(arr, N, i+1);

}
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i =0; i<N; i++){
        scanf("%d ", &arr[i]);
    }

    print_array(arr,N, 0);


    return 0;
}