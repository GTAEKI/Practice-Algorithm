#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
    cin >> t;
    while(t--)
    {
        int n = 0;
        cin >> n;
        map<string, int> m1;
        for(int i = 0; i < n; i++)
        {
            string a,b;
            cin >> a >> b;
            
            m1[b]++;
        }
        
        long long ret = 1;
        for(auto i : m1)
        {
            ret *= ((long long)i.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}