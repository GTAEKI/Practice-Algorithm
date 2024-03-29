#include<bits/stdc++.h>
using namespace std;

int N,K,ret;
const int MAX = 200001;
int visited[MAX], prevN[MAX];
stack<int> stk;

int main()
{
    cin >> N >> K;
    visited[N] = 1;
    queue<int> que;
    que.push(N);
    while(que.size())
    {
        int now = que.front();
        que.pop();
        if(now == K)
        {
            ret = visited[K];
            break;
        }
        for(int next : {now-1,now+1,now*2})
        {
            if(next >= MAX || next < 0 || visited[next]) continue;
            visited[next] = visited[now] +1;
            prevN[next] = now;
            que.push(next);
        }
    }
    
    for(int i = K; i != N; i = prevN[i])
    {
        stk.push(i);
    }
    stk.push(N);
    
    cout << ret-1 << "\n";
    while(stk.size())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    return 0;
}