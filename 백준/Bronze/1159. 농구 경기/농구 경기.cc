#include<bits/stdc++.h>
using namespace std;

int n, a[26], cnt,c;
string name;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        a[name[0] - 'a']++;
    }
    
    for(int i : a)
    {
        if(i >= 5)
        {
            cout << (char)(cnt + 'a');
            c++;
        }
        cnt++;
    }
    
    if(c == 0)
    {
        cout << "PREDAJA";
    }
    return 0;
}