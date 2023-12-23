#include<bits/stdc++.h>
using namespace std;

int arr[10][10];
int visited[10][10];
int n,m;
vector<pair<int,int>> virusList;
vector<pair<int,int>> wallList;
int dy[4] = {0,1,0,-1};
int dx[4] = {1,0,-1,0};
int ret;

void dfs(int y, int x)
{
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || arr[ny][nx] ==1) continue;
        visited[ny][nx] = 1;
        dfs(ny,nx);
    }
    return ;
}

int solve()
{
    fill(&visited[0][0],&visited[0][0] + 10 * 10, 0);
    for(pair<int,int> b : virusList)
    {
        visited[b.first][b.second] = 1;
        dfs(b.first, b.second);
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 0 && !visited[i][j])cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 2) virusList.push_back({i,j});
            if(arr[i][j] == 0) wallList.push_back({i,j});
        }
    }
    
    for(int i = 0; i < wallList.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            for(int k = 0; k < j; k++)
            {
                arr[wallList[i].first][wallList[i].second] = 1;
                arr[wallList[j].first][wallList[j].second] = 1;
                arr[wallList[k].first][wallList[k].second] = 1;
                ret = max(ret, solve());
                arr[wallList[i].first][wallList[i].second] = 0;
                arr[wallList[j].first][wallList[j].second] = 0;
                arr[wallList[k].first][wallList[k].second] = 0;
            }
        }
    }
    
    cout << ret;
    return 0;
}