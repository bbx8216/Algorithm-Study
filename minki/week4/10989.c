#include <stdio.h>

int main() {
    int N;
    int num[10001] = { 0 };
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int temp;
        scanf("%d", &temp);
        num[temp]++;
    }

    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < num[i]; ++j) {
            printf("%d\n", i);
        }
    }

    return 0;
}