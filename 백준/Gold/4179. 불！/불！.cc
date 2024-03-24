#include<bits/stdc++.h>
using namespace std;

int R, C,jY,jX,fY,fX;
const int INF = 987654321;
char mapp[1001][1001];
int visited[1001][1001];
int fvisited[1001][1001];
int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};
queue<pair<int,int>> fQue;

void fireBFS()
{
    int y,x = 0;
    while(!fQue.empty())
    {
        tie(y,x) = fQue.front();
        fQue.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
            else if (mapp[ny][nx] == '#') continue;
            else if (fvisited[ny][nx] == INF)
            {
                fvisited[ny][nx] = fvisited[y][x] + 1;
                fQue.push({ny,nx});
            }
        }
    }
}

int userBFS(int y, int x)
{
    visited[y][x] = 1;
    queue<pair<int,int>> que;
    que.push({y,x});
    while(!que.empty())
    {
        tie(y,x) = que.front();
        que.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= R || nx >= C)
            {
                return visited[y][x];
            }
            else if (visited[ny][nx]) continue;
            else if (mapp[ny][nx] == '#') continue;
            else if (visited[y][x] + 1 >= fvisited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            que.push({ny,nx});
        }
    }
    return 0;
}

int main()
{
    bool isFire = false;
    
    cin >> R >> C;
    fill(&fvisited[0][0], &fvisited[0][0] + (1001 * 1001), INF);
    for(int j = 0; j < R; ++j)
    {
        for(int i = 0; i < C; ++i)
        {
            cin >> mapp[j][i];
            if(mapp[j][i] == 'J')
            {
                jY = j;
                jX = i;
            }
            else if(mapp[j][i] == 'F')
            {
                fQue.push({j,i});
                fvisited[j][i] = 1;
            }
        }
    }
    
    fireBFS();
    int result = userBFS(jY,jX);
    
    if(result != 0) cout << result;
    else cout << "IMPOSSIBLE";
    return 0;
}