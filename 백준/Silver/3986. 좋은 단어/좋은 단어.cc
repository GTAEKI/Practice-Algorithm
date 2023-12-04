#include<bits/stdc++.h>
using namespace std;

int n, ans;
string ab;
stack<char> sk;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {   
        cin >> ab;
        
        while(!sk.empty()) sk.pop();
        
        for(int j = 0; j<ab.size();j++)
        {
            if(!sk.empty() && sk.top() == ab[j])
            {
                sk.pop();
                continue;
            }
            sk.push(ab[j]);
        }
        
        if(sk.empty())
        {
            ans++;
        }
    }
    
    cout << ans;
    return 0;
}