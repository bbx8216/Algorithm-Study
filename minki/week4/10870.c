#include <stdio.h>

int fibonacci(int N) {
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
    else
        return fibonacci(N - 1) + fibonacci(N - 2);
}
int main() {
    int N;
    scanf("%d", &N);
    printf("%d", fibonacci(N));
    return 0;
}