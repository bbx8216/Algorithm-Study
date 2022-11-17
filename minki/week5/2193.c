#include<stdio.h>

int main(){
    int N;
    unsigned long long dp[91];
    scanf("%d", &N);
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; i++){
        dp[i] = dp[i - 1]+ dp[i - 2];
    }
    printf("%llu", dp[N]);
    return 0;
}