#include <stdio.h>

int main(){
    int dp[101][10], N;
    unsigned long long ans = 0;
    scanf("%d", &N);
    for (int i = 1; i <= 9; i++){
        dp[1][i] = 1;
    }
    dp[1][0] = 0;
    for (int i = 2; i <= N; i++){
        dp[i][0] = dp[i-1][1] % 1000000000;
        for (int j = 1; j <= 8; j++){
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
        dp[i][9] = dp[i-1][8] % 1000000000;
    }
    for (int i = 0 ; i <= 9; i++){
        ans = (ans + dp[N][i]) % 1000000000;
    }
    printf("%llu", ans);
    return 0;
}