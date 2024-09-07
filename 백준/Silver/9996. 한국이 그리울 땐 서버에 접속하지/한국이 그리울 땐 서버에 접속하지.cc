#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    cin >> s;
    
    string front = s.substr(0,s.find('*'));
    string back = s.substr(s.find('*') + 1);
    
    for(int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        
        if(t.size() < front.size()+back.size() ||
          t.substr(0,front.size()) != front ||
          t.substr(t.size()-back.size()) != back)
        {
            cout << "NE" << "\n";
        }
        else
        {
            cout  << "DA" << "\n";
        }
    }
    
    return 0;
}