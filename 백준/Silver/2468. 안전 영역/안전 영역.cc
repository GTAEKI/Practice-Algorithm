#include<bits/stdc++.h>
using namespace std;

int n, cnt,tmx;
int mx = -987654321;
int mp[104][104];
int visited[104][104];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void dfs(int y, int x, int depth)
{
    visited[y][x] = 1;
    
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(mp[ny][nx] <= depth || visited[ny][nx]) continue;
        
        dfs(ny,nx,depth);
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mp[i][j];
            tmx = max(tmx,mp[i][j]);
        }
    }
    
    for(int i = 0 ; i <= tmx; i++)
    {
        cnt = 0;
        memset(visited,0,sizeof(visited));
        
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(mp[j][k] <= i || visited[j][k]) continue;
                
                dfs(j,k,i);
                cnt++;
            }
        }
        mx = max(mx,cnt);
    }
    
    cout << mx;
    return 0;
    
    
}