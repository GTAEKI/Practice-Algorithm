#include<bits/stdc++.h>
using namespace std;

int n,m;
map <int,string> m1;
map <string,int> m2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        m1[i] = s;
        m2[s] = i;
    }
    
    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if(atoi(s.c_str()) == 0)
        {
            cout << m2[s] << '\n';
        }
        else
        {
            cout << m1[atoi(s.c_str())] << '\n';
        }
    }
    
    return 0;
}