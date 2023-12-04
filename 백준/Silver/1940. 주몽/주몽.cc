#include<bits/stdc++.h>
using namespace std;

long n,m,temp,cnt;
vector<long> ar;

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        ar.push_back(temp);
    }
    
    for(int i = 0; i < ar.size()-1; i++)
    {
        for(int j = i; j < ar.size(); j++)
        {
            if(i==j) continue;
            if(ar[i]+ar[j] == m)
            {
                cnt++;
            }
        }        
    }
    
    cout << cnt;
    return 0;
}