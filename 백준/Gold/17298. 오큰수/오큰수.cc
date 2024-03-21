#include<bits/stdc++.h>
using namespace std;

int N;
int arr[1000004], ans[1000004];
stack<int> stk;

int main()
{
    cin >> N;
    memset(ans,-1,sizeof(ans));
    
    for(int i = 0; i < N; ++i)
    {
        cin >> arr[i];
        
        while(!stk.empty() && arr[i] > arr[stk.top()])
        {
            ans[stk.top()] = arr[i];
            stk.pop();
        }
        
        stk.push(i);
    }
    
    for(int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}