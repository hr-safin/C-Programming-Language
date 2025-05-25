#include <stdio.h>

int main() {

    int Test;
    scanf("%d", &Test);

    for(int i =0; i<Test; i++){

        int N;
        scanf("%d", &N);
        
        int arr1[N], arr2[N], arr3[N];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr1[i]);
            arr2[i] = arr1[i];
        }
        
        for (int i = 0; i < N-1; i++) {

            for (int j = 0; j < N-i-1; j++) {

                if (arr2[j] > arr2[j+1]) {
                    
                    int temp = arr2[j];
                    arr2[j] = arr2[j+1];
                    arr2[j+1] = temp;
                }
            }
        }
        
        
        for (int i = 0; i < N; i++) {

            int diff = arr1[i] - arr2[i];

            if (diff < 0) {

                arr3[i] = -diff;

            } 
            else {
                arr3[i] = diff;
            }
        }
        
        
        for (int i = 0; i < N; i++) {

            printf("%d ", arr3[i]);
            
        }

        printf("\n");
    }
    
    
    
    return 0;
}