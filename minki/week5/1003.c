#include <stdio.h>

void count(int n);

int main() {
    int T=0,f;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &f);
        count(f);

    }

    return 0;

}

void count(int n) {
    int zero, one, tmp;
    if (n == 0)
        zero = 1, one = 0;
    else if(n == 1)
        zero = 0, one = 1;
    else {
        zero = 1, one = 1;
        for (int i = 2; i < n; i++) {
            tmp = zero;
            zero = one;
            one = one + tmp;
        }
    }
    printf("%d %d\n", zero, one);

}