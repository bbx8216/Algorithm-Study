#include <stdio.h>

int main(){
    int N,dp[100001], input, temp;
    scanf("%d", &N);
    scanf("%d", &input);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &input);
        arr[i] = input;
    }
    temp = 0;
    for (int i = 1; i <= N; i++){
        temp += arr[i];
        dp[i] = max(dp[i-1], )
        if (temp < dp[i-1]){
            temp = 0;
            dp[i] = dp[i-1];
        }
        else if (temp >= dp[i - 1]){
            dp[i] = temp;
        }
    }
    printf("%d", dp[N]);
    return 0;
}