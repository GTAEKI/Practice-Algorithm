#include<bits/stdc++.h>
using namespace std;

string mapp[1004];
int fireDist[1004][1004];
int personDist[1004][1004];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main()
{
    int R,C;
    
    cin >> R >> C;
    for(int i = 0; i < R; i++)
    {
        cin >> mapp[i];
    }
    
    for(int i = 0; i < R; i++)
    {
        fill(fireDist[i],fireDist[i]+C,-1);
        fill(personDist[i],personDist[i]+C,-1);
    }
    
    queue<pair<int,int>> fireQ;
    queue<pair<int,int>> personQ;
    bool isEscape = false;
    
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(mapp[i][j] == 'F')
            {
                fireQ.push({i,j});
                fireDist[i][j] = 0;
            }
            else if(mapp[i][j] == 'J')
            {
                personQ.push({i,j});
                personDist[i][j]= 0;
            }
        }
    }
    
    while(!fireQ.empty())
    {
        pair<int,int> now = fireQ.front();
        fireQ.pop();
        
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = now.first + dx[dir];
            int ny = now.second + dy[dir];
            
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if(mapp[nx][ny] == '#'|| fireDist[nx][ny] != -1) continue;
            
            fireDist[nx][ny] = fireDist[now.first][now.second]+1;
            fireQ.push({nx,ny});
        }
    }
    
    while(!personQ.empty() && !isEscape)
    {
        pair<int,int> now = personQ.front();
        personQ.pop();
        
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = now.first + dx[dir];
            int ny = now.second + dy[dir];
            
            if(nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                isEscape = true;
                cout << personDist[now.first][now.second] + 1;
                break;
            }
            else if(mapp[nx][ny] == '#' || personDist[nx][ny] != -1) continue;
            else if(fireDist[nx][ny] != -1 && fireDist[nx][ny] <= personDist[now.first][now.second]+1) continue;
            
            personDist[nx][ny] = personDist[now.first][now.second] + 1;
            personQ.push({nx,ny});
        }
    }
    
    if(!isEscape) cout << "IMPOSSIBLE";
    
    return 0;
}