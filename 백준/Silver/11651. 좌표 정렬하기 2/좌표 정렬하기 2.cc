#include<bits/stdc++.h>
using namespace std;

int N;
int t1,t2;
vector<pair<int,int>> arr;

bool compare(pair<int,int> a, pair<int,int> b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> t1 >> t2;
        arr.push_back({t1,t2});
    }
    sort(arr.begin(),arr.end(),compare);
    for(auto i : arr)
    {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
    
}