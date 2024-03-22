#include<bits/stdc++.h>
using namespace std;

int w,h,max_Length;
const int MAX = 51;
char gameMap[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void bfs(int j, int i)
{
    memset(visited,0,sizeof(visited));
    visited[j][i] = 1;
    int nx,ny,y,x = 0;
    queue<pair<int,int>> que;
    que.push({j,i});
    while(!que.empty())
    {
        tie(y,x) = que.front();
        que.pop();
        for(int i = 0; i < 4; i++)
        {
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= h || nx >= w || visited[ny][nx]) continue;
            if(gameMap[ny][nx] == 'W') continue;
            visited[ny][nx] = visited[y][x] +1;
            max_Length = max(visited[ny][nx],max_Length);
            que.push({ny,nx});
        }
    }
}

int main()
{
    cin >> h >> w;
    for(int j = 0; j < h; j++)
    {
        for(int i = 0; i < w; i++)
        {
            cin >> gameMap[j][i];
        }
    }
    
    for(int j = 0; j < h; j++)
    {
        for(int i = 0; i < w; i++)
        {
            if(gameMap[j][i] == 'L')
            {
                bfs(j,i);
            }         
        }
    }
    
    cout << max_Length - 1;
    return 0;
}