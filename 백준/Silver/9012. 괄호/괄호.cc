#include<bits/stdc++.h>
using namespace std;

int n;
stack<char> l;
string s;
bool flag = false;

int main()
{
    cin >> n;
    for(int i = 0 ;i < n; i++)
    {
        cin >> s;
        flag = false;
        while(!l.empty()) l.pop();
        
        for(int j = 0;  j< s.size(); j++)
        {
            if(s[j] == '(') l.push(s[j]);
            else 
            {
                if(l.empty() == true)
                {
                    flag = true;
                    break;
                }
                
                l.pop();
            }
        }
        
        if(flag == false && l.empty()) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
    
}