#include<bits/stdc++.h>
using namespace std;


int N,M,turn=1,check;
int pX,pY,cX,cY;
const int MAX = 301;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int visited[MAX][MAX];
char gameMap[MAX][MAX];
queue<pair<int,int>> que;

void dfs(int x, int y)
{
    for(int i = 0; i < 4; i++)
    {
        if(check) return;
        
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx > MAX || ny > MAX || visited[nx][ny]) continue;
        
        visited[nx][ny] = 1;
        
        if(gameMap[nx][ny] == '1')
        {
            gameMap[nx][ny] = '0';
            que.push({nx,ny});
        }
        else if(gameMap[nx][ny] == '#')
        {
            check = 1;
            return;
        }
        else if(gameMap[nx][ny] == '0')
        {
            dfs(nx,ny);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M >> pX >> pY >> cX >> cY; 
    for(int i = 0; i < N ; i++)
    {
        for(int j = 0; j < M ; j++)
        {
            cin >> gameMap[i][j];
        }
    }
    
    que.push({pX-1,pY-1});
    while(que.size())
    {
        int qSize = que.size();
        for(int i = 0; i < qSize; i++)
        {
            int tx = que.front().first;
            int ty = que.front().second;
            que.pop();
            dfs(tx,ty);
            if(check) break;
        }
        if(check) break;
        turn++;
    }
    
    cout << turn;
    return 0;
}