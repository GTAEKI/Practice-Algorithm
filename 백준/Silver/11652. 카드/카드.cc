#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, temp, result;
int maxCount;
unordered_map<ll, int> um;

int main()
{
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> temp;
        um[temp]++;
    }
    
    for(auto it = um.begin(); it != um.end(); it++)
    {
        if(maxCount < it->second)
        {
            maxCount = it->second;
            result = it->first;
        }
        else if(maxCount == it->second)
        {
            if(it->first < result)
            {
                result = it->first;
            }
        }
    }
    
    cout << result;
    
    return 0;
}