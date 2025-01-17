#include<bits/stdc++.h>
using namespace std;

string board[1001];
int fireDist[1001][1001];
int personDist[1001][1001];
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

int main()
{
    int t;
    cin >> t;
    
    for(int tc = 0; tc < t; tc++)
    {
        int w, h;
        cin >> w >> h;
        
        for(int i = 0; i < h; i++)
        {
            cin >> board[i];
        } // 맵 입력
        
        for(int i = 0; i < h; i++)
        {
            fill(fireDist[i], fireDist[i] + w, -1);
            fill(personDist[i], personDist[i]+w, -1);
        } // 거리 초기화
        
        queue<pair<int,int>> fireQ;
        queue<pair<int,int>> personQ;
        bool escape = false;
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(board[i][j] == '*')
                {
                    fireQ.push({i,j});
                    fireDist[i][j] = 0;
                }
                else if(board[i][j] == '@')
                {
                    personQ.push({i,j});
                    personDist[i][j] = 0;
                }
            }
        }// 시작점 설정
        
        // 불 BFS지나가는 시간 기록
        while(!fireQ.empty())
        {
            auto now = fireQ.front();
            fireQ.pop();
            
            for(int dir = 0; dir < 4; dir++)
            {
                int nx = now.first + dx[dir];
                int ny = now.second + dy[dir];
                
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if(board[nx][ny] == '#' || fireDist[nx][ny] != -1) continue;
                fireDist[nx][ny] = fireDist[now.first][now.second] + 1;
                fireQ.push({nx,ny});
            }
        }
        
        // 상근이 BFS 지나가는 시간 기록
        while(!personQ.empty() && !escape)
        {
            auto now = personQ.front();
            personQ.pop();
            
            for(int dir = 0; dir < 4; dir++)
            {
                int nx = now.first + dx[dir];
                int ny = now.second + dy[dir];
                
                if(nx < 0 || nx >= h || ny < 0 || ny >= w)
                {
                    cout << personDist[now.first][now.second] + 1 << '\n';
                    escape = true;
                    break;
                }
                
                if(board[nx][ny] == '#' || personDist[nx][ny] != -1) continue;
                if(fireDist[nx][ny] != -1 && fireDist[nx][ny] <= personDist[now.first][now.second] + 1) continue;
                
                personDist[nx][ny] = personDist[now.first][now.second] + 1;
                personQ.push({nx,ny});
            }// direction            
        }// while()
        
        if(!escape) cout << "IMPOSSIBLE" << '\n';
        
    }// 테스트케이스
    
    return 0;
}// main()