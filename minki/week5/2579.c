#include <stdio.h>

int max(int x, int y){
    if (x> y)
        return x;
    else
        return y;
}

int main(){
    int N, arr[301], dp[301];
    scanf("%d", &N);
    dp[0] = 0;
    for (int i = 1 ; i <= N; i++){
        scanf("%d", &arr[i]);
        if (i == 1){
            dp[1] = arr[1];
        }
        if (i == 2){
            dp[2] = arr[1] + arr[2];
        }
    }
    for (int i = 3; i<= N; i++){
        dp[i] = max(dp[i-2]+arr[i], arr[i]+arr[i-1]+dp[i-3]);
    }
    printf("%d", dp[N]);
    return 0;
}