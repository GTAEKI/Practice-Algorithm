#include<bits/stdc++.h>
using namespace std;

int N,M,A,B, tempAns, maxCount;
int visited[10001];
vector<int> v[10001]; // 2차원 벡터 배열
int countArr[10001];

int dfs(int here)
{
    visited[here] = 1;
    int ret = 1;
    for(int there : v[here])
    {
        if(visited[there]) continue;
        ret += dfs(there);
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0; i < M; ++i)
    {
        cin >> A >> B;
        v[B].push_back(A); // A가 B를 신뢰하면 B를 해킹할 경우 A도 해킹가능, 즉 B를 타고 A로 들어감
    }
    
    for(int i = 1; i <= N; ++i) // 숫자 N번까지 있음
    {
        memset(visited, 0, sizeof(visited));
        
        tempAns = dfs(i);
        countArr[i] = tempAns;
        maxCount = max(tempAns,maxCount);
    }
    
    for(int i = 1; i <= N; ++i)
    {
        if(countArr[i] == maxCount)
        {
            cout << i << " ";
        }
    }
    return 0;
    
}