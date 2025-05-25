#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i<T; i++) {
        int N;
        scanf("%d", &N);
        int arr[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int min_sum = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int current_sum = arr[i] + arr[j] + (j - i);
                if (current_sum < min_sum) {
                    min_sum = current_sum;
                }
            }
        }
        printf("%d\n", min_sum);
    }

    return 0;
}