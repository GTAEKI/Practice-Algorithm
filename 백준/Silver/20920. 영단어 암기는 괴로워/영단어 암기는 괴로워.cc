#include<bits/stdc++.h>

using namespace std;

int n, m;
string str;
unordered_map<string, int> v;

bool cmp(pair<string, int> &a, pair<string, int> &b);

int main(void)
{
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.length() >= m)
        {
            v[str]++;
        }
            
    }
    
    vector<pair<string, int>> vec(v.begin(), v.end());
    
    sort(vec.begin(), vec.end(),cmp);
    
    for (auto answer : vec)
    {
        cout << answer.first << "\n";
    }
    return 0;
}

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second==b.second)
    {
        if (a.first.length()==b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}