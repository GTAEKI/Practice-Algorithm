#include<bits/stdc++.h>
using namespace std;

const int MAX = 50;
int mapA[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int N,L,R,check,result,sum;
vector<pair<int,int>> team;

void dfs(int y, int x)
{
    visited[y][x] = 1;
    for(int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(ny < 0 || nx < 0 || ny >= N || nx >= N || visited[ny][nx] == 1) continue;
        else if(abs(mapA[y][x] - mapA[ny][nx]) < L ||abs(mapA[y][x] - mapA[ny][nx]) > R) continue;
        team.push_back({ny,nx});
        sum += mapA[ny][nx];
        dfs(ny,nx);
        check++;
    }
}

int main()
{
    cin >> N >> L >> R;
    for(int r = 0; r < N; ++r)
    {
        for(int c = 0; c < N; ++c)
        {
            cin >> mapA[r][c];
        }
    }
    
    while(true)
    {
        check = 0;
        memset(visited, 0, sizeof(visited));
        
        for(int r = 0; r < N; ++r)
        {
            for(int c = 0; c < N; ++c)
            {
                if(visited[r][c] != 1) // 이미 방문한곳은 다시 방문하지 않음
                {
                    team.push_back({r,c});
                    sum += mapA[r][c];
                    dfs(r,c);
                    int average = sum / team.size();
                    for(auto i : team)
                    {
                        mapA[i.first][i.second] = average;
                    }
                    team.clear();
                    sum = 0;
                }
            }
        }
        if(check == 0) break;
        result++;
    }
    
    cout << result;
    return 0;
    
    
}