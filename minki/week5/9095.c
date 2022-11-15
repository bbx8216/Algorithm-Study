#include <stdio.h>

int main(){
    int dp[12], N, temp;
    scanf("%d", &N);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= 11 ; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &temp);
        printf("%d", dp[temp]);
    }
    return 0;
}