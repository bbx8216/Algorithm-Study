#include <stdio.h>

int max(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}

int main(){
    int N, dp[501][502], arr[501][502], ans;
    scanf("%d", &N);
    for(int i = 1 ; i <= N; i++){
        for (int j = 0; j < i ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    dp[1][0] = arr[1][0];
    for (int i = 2; i<= N; i++){
        for (int j = 0; j < i; j++){
            if (j == 0){
                dp[i][j] = dp[i-1][j] + arr[i][j];
            }
            else{
                dp[i][j] = max(dp[i -1][j -1], dp[i-1][j]) + arr[i][j];
            }
        }
    }
    ans = dp[N][0];
    for (int i = 0; i< N; i++){
        if (ans < dp[N][i])
            ans = dp[N][i];
    }
    printf("%d", ans);
}