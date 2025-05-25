#include<stdio.h>

void odd_even(){
   int N;
   scanf("%d", &N);
   int arr[N];
   int even_count = 0;
   int odd_count = 0;

   for(int i =0; i<N; i++){
    scanf("%d ", &arr[i]);
   }

   for(int i =0; i<N; i++){
      if(arr[i] % 2 ==0){
        even_count++;
      }
      if(arr[i] % 2 != 0){
       odd_count++;
      }
   }

    printf("%d %d", even_count, odd_count );
   

}
int main(){
    
    odd_even();
    return 0;
}