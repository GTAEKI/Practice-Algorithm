#include<bits/stdc++.h>
using namespace std;

int H, W;
const int MAX = 51;
char mapp[MAX][MAX];      
bool visited[MAX][MAX];
int path[MAX][MAX];
int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };
queue<pair<int, int>> q;
int max_len = 0;

int BFS(int y, int x) {
    path[y][x] = 1;
    visited[y][x] = true;
    q.push(make_pair(y, x));
 
    while (!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();
 
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
 
            if (ny < 0 || nx < 0 || ny >= H || nx >= W)
                continue;
            if (mapp[ny][nx] == 'L' && !visited[ny][nx]) {
                visited[ny][nx] = true;
                path[ny][nx] = path[y][x] + 1;
                q.push(make_pair(ny, nx));
                if (max_len < path[ny][nx]) {
                    max_len = path[ny][nx];
                }
            }
        }
    }
    return max_len - 1;
}

// 보물은 서로 간에 최단 거리로 이동하는데 있어 가장 긴 시간이 걸리는 육지 두곳에 나뉘어 묻혀있음
 
int main() {
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%1s", &mapp[i][j]);
        }
    }
    
    int ans = 0; 
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (mapp[i][j] == 'L') {
                ans = max(BFS(i, j),ans);
                memset(visited,0,sizeof(visited));
                memset(path,0,sizeof(path));
                max_len = 0;
            }
        }
    }
 
    cout << ans;
    return 0;
}
