#include<bits/stdc++.h>
using namespace std;

int T;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> T;
    string pt;
    
    for(int i = 0; i < T; i++)
    {
        cin >> pt;
        stack<char> s;
        bool check = false;
        
        for(char c : pt)
        {
            if(c == ')')
            {
                if(!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    cout << "NO\n";
                    check = true;
                    break;
                }  
            }
            else
            {
                s.push(c);
            }
        }
        
        if(check == true) continue;
        
        if(s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}
