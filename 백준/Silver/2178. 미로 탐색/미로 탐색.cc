#include<bits/stdc++.h>
using namespace std;

int n,m,y,x;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
bool mapp[104][104];
int visited[104][104];

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++)
        {
            mapp[i][j] = str[j] - '0';
        }
    }
    
    queue<pair<int,int>> q;
    visited[0][0] = 1;
    q.push({0,0});
    while(q.size())
    {
        tie(y,x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(nx < 0 || ny < 0 || nx >= m || ny >= n || mapp[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }
    cout << visited[n-1][m-1];
    return 0;
}