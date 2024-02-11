#include<bits/stdc++.h>
using namespace std;

int N;
queue<int> que;
bool even = false;
int ans;

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        que.push(i);
    }
    
    while(que.size() != 0)
    {
        if(!even)
        {
            ans = que.front();
            que.pop();  
        }
        else 
        {
            que.push(que.front());
            ans = que.front();
            que.pop();
        }
        
        even = !even;
    }
    
    cout << ans;
    return 0;
}