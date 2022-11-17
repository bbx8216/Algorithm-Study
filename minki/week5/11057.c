#include <stdio.h>

int main(){
    int N, dp[1001][10] = {1, };
    scanf("%d",&N);
    for(int i = 0 ; i < 10 ; i++){
        dp[1][i] = i + 1;
    }
    for (int i = 0 ; i <= N;i++){
        dp[i][0] = 1;
    }
    for(int i = 2; i <= N ; i++){
        for (int j = 1; j < 10; j++){
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
        }
    }
    printf("%d", dp[N][9]);
}