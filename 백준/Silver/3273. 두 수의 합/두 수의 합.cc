#include<bits/stdc++.h>
using namespace std;

int n,x,ans;
vector<int> arr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i = 0; i <n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> x;
    
    sort(arr.begin(),arr.end());
    
    int f = 0;
    int l = n-1;
    while(f<l)
    {
        if(arr[f] + arr[l] == x)
        {
            l--;
            ans++;
        }
        else if(arr[f]+arr[l] > x) l--;
        else if(arr[f]+arr[l] < x) f++;
    }
    
    cout << ans;
    return 0;
}