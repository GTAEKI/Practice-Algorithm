#include<bits/stdc++.h>
using namespace std;

int N,K;
const int MAX = 100001;
int visited[MAX+1];
long long cnt[MAX+1];

int main()
{
    cin >> N >> K;
    if(N == K)
    {
        cout << 0 << "\n";
        cout << 1 << "\n";
        return 0;
    }
    
    visited[N] = 1;
    cnt[N] = 1;
    queue<int> que;
    que.push(N);
    while(!que.empty())
    {
        int now = que.front();
        que.pop();
        for(int next : {now-1, now+1, now*2})
        {
            if(0 <= next && next <= MAX)
            {
                if(visited[next] == 0)
                {
                    que.push(next);
                    visited[next] = visited[now] + 1;
                    cnt[next] += cnt[now];
                }
                else if(visited[next] == visited[now] + 1)
                {
                    cnt[next] += cnt[now];
                }
            }
        }
    }
    cout << visited[K] -1 << "\n";
    cout << cnt[K] <<"\n";
    return 0;
}