#include<bits/stdc++.h>
using namespace std;

int R,C,swY,swX,turn;
const int MAX = 1500;
char lake[MAX+1][MAX+1];
int visited[MAX+1][MAX+1];
int swVisited[MAX+1][MAX+1];
queue<pair<int,int>> waterQue;
queue<pair<int,int>> swQue;
int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> R >> C;
    for(int j = 0; j < R; j++)
    {
        for(int i = 0; i < C; i++)
        {
            cin >> lake[j][i];
            if(lake[j][i] == 'L')
            {
                swY = j;
                swX = i;
                waterQue.push({j,i});
                visited[j][i] = 1;
            }
            else if(lake[j][i] == '.')
            {
                waterQue.push({j,i});
                visited[j][i] = 1;
            }
        }   
    }
    
    swQue.push({swY,swX});
    swVisited[swY][swX] = 1;
    
    while(waterQue.size())
    {   
        queue<pair<int,int>> tempSWQue;
        while(swQue.size())
        {
            int ty = swQue.front().first;
            int tx = swQue.front().second;
            swQue.pop();    
            for(int i = 0; i < 4; i++)
            {
                int ny = ty+dy[i];
                int nx = tx+dx[i];
                if(ny < 0 || nx < 0 || ny > MAX || nx > MAX || swVisited[ny][nx]) continue;
                if(lake[ny][nx] == 'X')
                {
                    tempSWQue.push({ny,nx});
                    swVisited[ny][nx] = 1;
                }
                else if(lake[ny][nx] == '.')
                {
                    swQue.push({ny,nx});
                    swVisited[ny][nx] = 1;
                }
                else if(lake[ny][nx] == 'L')
                {
                    goto gameOver;
                }
            }
        }
        swQue = tempSWQue;
        
        int qSize = waterQue.size();
        for(int i = 0; i < qSize; i++)
        {
            int ty = waterQue.front().first;
            int tx = waterQue.front().second;
            waterQue.pop();
            for(int j = 0; j < 4; j++)
            {
                int ny = ty + dy[j];
                int nx = tx + dx[j];
                if(ny < 0 || nx < 0 || ny > MAX || nx > MAX || visited[ny][nx]) continue;
                if(lake[ny][nx] == 'X')
                {
                    waterQue.push({ny,nx});
                    lake[ny][nx] = '.';
                    visited[ny][nx] = 1;
                }
                else 
                {
                    visited[ny][nx] = 1;
                }
            }
        } //한번 물이 다 녹음   
        
        turn++;
    }
    
    gameOver:
    cout << turn;
    return 0;
    
}