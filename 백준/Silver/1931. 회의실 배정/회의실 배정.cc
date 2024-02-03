#include<bits/stdc++.h>
using namespace std;

int N,ans,last;
vector<pair<int,int>> arr;

int main()
{
    cin >> N;
    for(int i = 0 ; i< N; i++)
    {
        int from = 0;
        int to = 0;
        cin >> from >> to;
        arr.push_back({to,from});
    }
    
    sort(arr.begin(),arr.end());
    
    last = arr[0].first;
    ans = 1;
    for(int i = 1; i < N; i++)
    {
        if(last <= arr[i].second)
        {
            last = arr[i].first;
            ans++;
        }
    }
    
    cout << ans; 
    return 0;
}