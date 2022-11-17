#include <stdio.h>

long long p(int n);

int main() {
    int T, N[101];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < T; i++) {
        printf("%lld\n", p(N[i]));
    }

    return 0;

}

long long p(int n) {
    long long  num[101] = { 0,1,1,1,2,2, };
    for (int i = 6; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 5];
    }
    return num[n];
}