#include<bits/stdc++.h>
using namespace std;

int M,N,K; // M:y축, N:x축, K:직사각형 개수
int box[101][101];

// 사방을 체크하기위한 배열
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0}; 

vector<int> rets;
int dfsRet;

void dfs(int y, int x)
{
    box[y][x] = 1;
    dfsRet++;
    
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx < 0 || nx >= N || ny < 0 || ny >= M || box[ny][nx]) continue;
        dfs(ny,nx);
    }
}

int main()
{
    cin >> M >> N >> K;
    while(K--) // 박스의 개수만큼
    {
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = y1; i < y2; i++)
        {
            for(int j = x1; j < x2; j++)
            {
                box[i][j] = 1; //배열을 1로 채워줌
            }
        }
    }
    
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(box[i][j] != 1)
            {
                dfsRet = 0;
                dfs(i,j);
                rets.push_back(dfsRet);
            }
        }
    }
    
    sort(rets.begin(),rets.end());
    
    cout << rets.size() << "\n";
    for(int i : rets)
    {
        cout << i << " ";
    }
    return 0;
}