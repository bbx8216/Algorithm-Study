#include <stdio.h>
int min(int x, int y){
    if (x < y)
        return x;
    else
        return y;
}
int main(){
    int N, dp[1000001], temp;
    scanf("%d", &N);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= N; i++){
        dp[i] = dp[i-1]+1;
        if (i % 3 == 0){
            dp[i] = min(dp[i/3] + 1, dp[i]);
        }
        if (i % 2 == 0){
            dp[i] = min(dp[i/2] + 1, dp[i]);
        }
    }
    printf("%d", dp[N]);
    return 0;
}