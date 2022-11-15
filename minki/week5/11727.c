#include <stdio.h>

int main(){
    int N, dp[1001];
    scanf("%d", &N);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3 ; i <= N; i++){
        dp[i] = (dp[i - 1]+ 2 * dp[i -2]) % 10007;
    }
    printf("%d", dp[N]);
    return 0;
}