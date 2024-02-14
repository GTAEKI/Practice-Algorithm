#include<bits/stdc++.h>
using namespace std;

int N;
deque<pair<int,int>> dq;

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;
        dq.push_back({i,temp});
    }
    
    while(true)
    {
        int temp = dq.front().second;
        cout << dq.front().first << " ";
        dq.pop_front();
        if(dq.size() == 0) break;
        if(temp > 0)
        {
            for(int i = 0; i < temp-1; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else
        {            
            for(int i = temp; i < 0; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}