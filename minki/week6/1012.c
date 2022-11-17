#include <stdio.h>

int cab[51][51], visit[51][51];
int dir_y[] = {-1, 1, 0, 0};
int dir_x[] = {0,0, -1, 1};

void dfs(int y, int x, int M, int N){
    visit[y][x] = 1;
    for (int i = 0; i < 4 ; i++){
        int next_y = y + dir_y[i];
        int next_x = x + dir_x[i];
        if (next_y < 0 || next_x < 0 || next_x > M || next_y > N){
            continue;
        }
        if (cab[next_y][next_x] == 1 && visit[next_y][next_x] == 0){
            dfs(next_y, next_x, M, N);
        }
    }
}

int main(){
    int T, M, N, K, x, y, ans;
    scanf("%d", &T);
    for (int i = 0 ; i < T ; i++){
        scanf("%d %d %d", &M, &N, &K);
        ans = 0;
        for (int j = 0; j < 51; j++){
            for (int k = 0; k < 51; k++){
                cab[j][k] = 0;
                visit[j][k] = 0;
            }
        }
        for (int j = 0; j < K ; j++){
            scanf("%d %d", &x, &y);
            cab[y][x] = 1;
        }
        // 가로 줄 다보고 내려가고
        for (int j = 0; j < N ; j++){
            for (int k = 0 ; k < M ; k++){
                if (cab[j][k] == 1 && visit[j][k] == 0){
                    dfs(k,j, M, N);
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
        //초기화 해주어야함
    }
    return 0;
}