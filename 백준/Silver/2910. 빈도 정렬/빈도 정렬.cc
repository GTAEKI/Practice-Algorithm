#include<bits/stdc++.h>
using namespace std;

int n,c;
unordered_map<int,int> mp, mp_first;
int arr[1004];
vector<pair<int,int>> v;

bool cmp(pair<int,int> x, pair<int,int> y)
{
    if(x.first == y.first)
    {
        return mp_first[x.second] < mp_first[y.second];
    }
    return x.first > y.first;
}

int main()
{
    cin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp_first[arr[i]] == 0) mp_first[arr[i]] = i+1;    
    }
    
    for(auto i : mp)
    {
        v.push_back({i.second, i.first});
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for(auto i : v)
    {
        for(int j = 0; j < i.first; j++)
        {
            cout << i.second << " ";
        }
    }
    return 0;
    
}