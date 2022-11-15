#include <stdio.h>

int main() {
    int N = 0 , num[1000], tmp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (num[i] < num[j]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}