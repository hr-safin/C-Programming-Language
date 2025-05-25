#include <stdio.h>

int main() {
    int n; 
    int m;
    scanf("%d %d", &n, &m);
    
    
    if (n != m) {
        printf("NO");
        return 0;
    }
    
    int arr[n][m];
    
    
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {

            scanf("%d", &arr[x][y]);
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {

                if (arr[i][j] != 1) {
                    printf("NO");
                    return 0;
                }

            } 
            else {
                if (arr[i][j] != 0) {
                    printf("NO");
                    return 0;
                }
            }
        }
    }
    
    printf("YES");
    return 0;
}