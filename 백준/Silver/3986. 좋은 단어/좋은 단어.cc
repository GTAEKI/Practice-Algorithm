#include<bits/stdc++.h>
using namespace std;

int n,ans;
string s;

int main()
{
    cin >> n;
    
    for(int j = 0; j < n; j++)
    {
        
        stack<char> arr;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(arr.size() && arr.top() == s[i])
            {
                arr.pop();
                continue;
            }
            
            arr.push(s[i]);
        }
        
        if(arr.size() == 0)
            ans++;
    }
        
    cout << ans;
    return 0;
}