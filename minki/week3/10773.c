#include <stdio.h>
#include <string.h>

int stk[100001];
int cnt = 0;

void push(int data);
void delete();

int main() {
    int N, data[100000];
    long long sum=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &data[i]);
        if (data[i] != 0) {
            push(data[i]);
        }
        else {
            delete();
        }
    }
    for (int i = 0; i < cnt; i++) {
        sum += stk[i];
    }
    printf("%lld", sum);
    return 0;
}

void push(int data) {
    stk[cnt] = data;
    cnt++;
}

void delete() {
    stk[cnt-1] = 0;
    cnt--;
}