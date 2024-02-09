#include<bits/stdc++.h>
using namespace std;

int N;
int num = 1;
queue<int> que;
stack<int> stk;
vector<int> arr;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        que.push(temp);
    }
    
    while(!que.empty())
    {
        if(num == que.front())
        {
            arr.push_back(num);
            que.pop();
            num++;
        }
        else if(stk.size()!= 0 && num == stk.top())
        {
            arr.push_back(num);
            stk.pop();
            num++;
        }
        else
        {
            stk.push(que.front());
            que.pop();
        }   
    }
    
    while(!stk.empty())
    {
        arr.push_back(stk.top());
        stk.pop();
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != i+1)
        {
            cout << "Sad";
            return 0;
        }
    }
    
    cout << "Nice";
    return 0;
}