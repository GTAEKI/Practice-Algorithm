#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> arr;
int ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == m)
            {
                ans++;
            }
        }
    }
    
    cout << ans;
    
    return 0;
}