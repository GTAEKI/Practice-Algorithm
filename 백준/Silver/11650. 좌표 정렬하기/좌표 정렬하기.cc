#include<bits/stdc++.h>
using namespace std;

int N,i1,i2;
vector<pair<int,int>> pr;
bool compare(pair<int,int> a, pair<int,int> b)
{
    if(a.first==b.first) return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> i1 >> i2;
        pr.push_back({i1,i2});
    }
    
    sort(pr.begin(),pr.end());
    
    for(auto i : pr)
    {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}