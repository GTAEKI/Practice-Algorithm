#include<bits/stdc++.h>
using namespace std;

string s;

int main() 
{
    while (true) 
    {
        stack<char> stk;
        bool f1 = false, f2 = false;

        getline(cin, s);
        
        if (s.size() == 1 && s[0] == '.') 
        {
            break;
        }

        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == '(' || s[i] == '[') 
            {
                stk.push(s[i]);
            } 
            else if (s[i] == ')') 
            {
                if (stk.empty() || stk.top() != '(') 
                {
                    f1 = true;
                    break;
                }
                stk.pop();
            } 
            else if (s[i] == ']') 
            {
                if (stk.empty() || stk.top() != '[') 
                {
                    f1 = true;
                    break;
                }
                stk.pop();
            }
        }

        if (!f1 && stk.empty()) 
        {
            cout << "yes" << "\n";
        } 
        else 
        {
            cout << "no" << "\n";
        }
    }

    return 0;
}
