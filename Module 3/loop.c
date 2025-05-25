#include<stdio.h>

int main()
{ 

    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; i <= n; i++){
      
      if(i % 3==0 && i % 7== 0){
        printf("%d\n", i);
        count++;
      }
    }
    printf("Total Divisible of 3 and 7 =  %d  ", count);
    return 0;
}