#include <stdio.h>

void hanoitower(int N, int src, int dest, int temp){
    if (N == 1){
        printf("%d %d\n", src, dest);
        return ;
    }
    else{
        hanoitower(N-1, src, temp, dest);
        hanoitower(1, src, dest, temp);
        hanoitower(N-1, temp, dest, src);
    }
}

int hanoiCnt(int N){
    if (N == 1)
        return 1;
    else
        return 2*hanoiCnt(N-1) + 1;
}
int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", hanoiCnt(N));
    hanoitower(N, 1, 3, 2);
    return 0;
}