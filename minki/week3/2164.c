#include <stdio.h>

int main() {
    int N, queue[500000], front=0, rear=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        queue[i] = i + 1;
    }
    rear = N - 1;
    while (rear != front) {
        front = (front + 1) % N;
        rear = (rear + 1) % N;
        queue[rear] = queue[front];
        front = (front + 1) % N;
    }
    printf("%d", queue[rear]);
    return 0;
}