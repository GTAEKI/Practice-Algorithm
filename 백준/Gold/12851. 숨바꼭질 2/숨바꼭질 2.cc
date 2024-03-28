#include<bits/stdc++.h>
using namespace std;

int N, K, MAX = 100000;
int visited[100001], cnt[100001];

int main()
{
    cin >> N >> K;
    
    visited[N] = 1;
    cnt[N] = 1;
    queue<int> que;
    que.push(N);
    while(!que.empty())
    {
        int now = que.front();
        que.pop();
        for(int next : {now-1,now+1,now*2})
        {
            if(next < 0 || next > MAX) continue;
            if(visited[next] == 0) // 방문한적이 없는 경우
            {
                que.push(next);
                visited[next] = visited[now] + 1;
                cnt[next] += cnt[now];
            }
            else if(visited[next] == visited[now] + 1) // 방문속도가 같은경우
            {
                cnt[next] += cnt[now];
            }
        }
    }
    cout << visited[K] - 1 << "\n";
    cout << cnt[K] << "\n";
    return 0;
}