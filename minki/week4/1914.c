#include <stdio.h>
//왜 틀렸을까
unsigned long long hanoiCnt(int N){
    if (N == 1){
        return 1;
    }
    else{
        return 2* hanoiCnt(N - 1) + 1;
    }
}
void hanoi(int N, int src, int dest, int tmp){
    if (N == 1){
        printf("%d %d\n",src, dest);
    }
    else{
        hanoi(N-1, src, tmp, dest);
        hanoi(1, src, dest, tmp);
        hanoi(N-1, tmp, dest, src);
    }
}

int main(){
    int N, K;
    scanf("%d", &N);
    printf("%llu\n", hanoiCnt(N));
    if (N <= 20){
        hanoi(N, 1, 3, 2);
    }
    return 0;
}