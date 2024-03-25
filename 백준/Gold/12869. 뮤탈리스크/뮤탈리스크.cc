#include<bits/stdc++.h>

using namespace std;
int N;
int arr[3] = {1,3,9};
int visited[61][61][61];
int scv[3];
vector<vector<int>> ans;
queue<tuple<int,int,int>> que;

int solve(int a,int b, int c)
{
    visited[a][b][c] = 1;
    que.push(make_tuple(a,b,c));
    while(que.size())
    {
        int a = get<0>(que.front());
        int b = get<1>(que.front());
        int c = get<2>(que.front());
        que.pop();
        if(visited[0][0][0]) break;
        for(int i = 0; i < ans.size(); i++)
        {
            int na = max(0, a - ans[i][0]);
            int nb = max(0, b - ans[i][1]);
            int nc = max(0, c - ans[i][2]);
            if(visited[na][nb][nc]) continue;
            visited[na][nb][nc] = visited[a][b][c] +1;
            que.push(make_tuple(na,nb,nc));
        }
    }
    return visited[0][0][0] - 1;
}

int main()
{
    do 
    {
        vector<int> tempArr;
        for (int i = 0; i < 3; ++i) 
        {
            tempArr.push_back(arr[i]);
        }
        ans.push_back(tempArr);
    } while (next_permutation(arr, arr + 3));
    
    cin >> N;
    for(int i = 0; i < N; i++) cin >> scv[i];
    cout << solve(scv[0],scv[1],scv[2]);
    return 0;
}