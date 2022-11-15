#include <stdio.h>

int main() {
    long int  num = 0;
    int cnt = 0, n[10] = { 0 }, tmp=0;
    scanf("%d", &num);
    while (num != 0) {
        n[cnt] = num % 10;
        num = num / 10;

        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt; j++) {
            if (n[i] > n[j]) {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d", n[i]);
    }
    return 0;
}