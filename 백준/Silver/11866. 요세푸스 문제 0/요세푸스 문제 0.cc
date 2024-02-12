#include<bits/stdc++.h>
using namespace std;

int K, N;
queue<int> que;

int main()
{
    cin >> N >> K;
    for(int i = 1; i<=N; i++)
    {
        que.push(i);
    }
    cout << "<";
    while(true)
    {
        for(int i = 1; i <= K; i++)
        {
            
            if(i == K)
            {
                cout << que.front();
                que.pop();
                break;
            }
            else 
            {
                que.push(que.front());
                que.pop();
            }
        }
        
        if(que.size() != 0) cout << ", ";
        else break;
    }
    cout << ">";
    return 0;
}