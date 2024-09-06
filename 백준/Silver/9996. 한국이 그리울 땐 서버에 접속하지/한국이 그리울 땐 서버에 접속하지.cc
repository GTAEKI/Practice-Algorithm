#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
    cin >> n; 
    cin >> s;
    
    string front = s.substr(0, s.find('*'));
    string back = s.substr(s.find('*') + 1);

    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        
        if (temp.size() < front.size() + back.size())
        {
            cout << "NE\n";
            continue;
        }
        
        if (temp.substr(0, front.size()) != front)
        {
            cout << "NE\n";
            continue;
        }
        
        if (temp.substr(temp.size() - back.size()) != back)
        {
            cout << "NE\n";
            continue;
        }
        
        cout << "DA\n";
    }

    return 0;
}