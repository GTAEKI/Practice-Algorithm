#include<bits/stdc++.h>
using namespace std;

string a;

int main()
{
    while(true)
    {
        getline(cin,a);
        
        if(a == ".") break;
        
        stack<char> pt;
        bool isValid = true;
        
        for(char c : a)
        {
            if(c == '(' || c == '[')
            {
                pt.push(c);
            }
            else if(c == ')')
            {
                if(pt.empty() || pt.top() != '(')
                {
                    isValid = false;
                    break;
                }
                pt.pop();
            }
            else if(c == ']')
            {
                if(pt.empty() || pt.top() != '[')
                {
                    isValid = false;
                    break;
                }
                pt.pop();
            }
        }
        
        if(pt.empty() == false) isValid = false;
        
        if(isValid) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}