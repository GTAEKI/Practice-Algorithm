#include<bits/stdc++.h>
using namespace std;

int t,m,n,k;
int mp[51][51];
int visited[51][51];

int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

void bfs(int ty, int tx)
{
    queue<pair<int,int>> q;
    q.push({ty,tx});
    visited[ty][tx] = 1;
    
    int y,x;
    
    while(q.size())
    {
        tie(y,x) = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(mp[ny][nx] != 1 || visited[ny][nx]) continue;
            
            q.push({ny,nx});
            visited[ny][nx] = 1;
        }
    }
}

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        memset(mp,0,sizeof(mp));
        memset(visited,0,sizeof(visited));
        int cnt = 0;
        
        cin >> m >> n >> k;
        
        for(int j = 0; j  < k; j++)
        {
            int t1,t2;
            cin >> t1 >> t2;
            mp[t2][t1] = 1;
        } 
        
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                if(visited[j][k] != 1 && mp[j][k] == 1)
                {
                    bfs(j,k);
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
    }
    return 0;
}