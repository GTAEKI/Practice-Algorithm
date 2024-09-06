#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[100004];
int psum[100004];
int ans = -987654321;

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        psum[i] = psum[i-1] + arr[i];
    }
    
    for(int i = k; i <= n; i++)
    {
        ans = max(ans, psum[i]-psum[i-k]);
    }
    cout << ans;
    return 0;
}