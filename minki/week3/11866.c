#include <stdio.h>
#include <stdlib.h>
// 큐 사용하면 헤드 옮겨가며 계속 빼기

int main(){
    int N, K, idx, cnt;
    int* arr;
    int* ret;
    scanf("%d %d",&N, &K);
    arr = malloc(sizeof(int)*N);
    ret = malloc(sizeof(int)*N);

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    idx = -1;
    for (int i = 0 ; i < N; i++){
        cnt = 0;
        while(cnt < K){
            idx = (idx + 1) % N;
            if (arr[idx] != 0){
                cnt++;
            }
        }
        ret[i] = arr[idx];
        arr[idx] = 0;
    }
    printf("<");
    for (int i = 0; i < N - 1; i++){
        printf("%d, ", ret[i]);
    }
    printf("%d>", ret[N-1]);
    return 0;
}