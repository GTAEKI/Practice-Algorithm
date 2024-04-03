#include<bits/stdc++.h>
using namespace std;

int R,C;
const int MAX = 20;
int ret;
char gameMap[MAX+1][MAX+1];
int visited[50];
int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

void dfs(int y,int x,int cnt)
{
    ret = max(ret,cnt);
    
    for(int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
        
        if(visited[gameMap[ny][nx] - 'A'] == 0)
        {
            visited[gameMap[ny][nx] - 'A'] = 1;
            dfs(ny,nx,cnt+1);
            visited[gameMap[ny][nx] - 'A'] = 0;    
        }                                          
    }
    return;
}

int main()
{
    cin >> R >> C;
    for(int j = 0; j < R; j++)
    {
        for(int i = 0; i < C; i++)
        {
            cin >> gameMap[j][i];
        }
    }
    
    visited[gameMap[0][0] - 'A'] = 1;
    dfs(0,0,1);
    
    cout << ret;
    return 0;
}