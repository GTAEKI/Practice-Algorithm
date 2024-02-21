#include<bits/stdc++.h>
using namespace std;

int N,ans;

int main()
{
    cin >> N;
    ans = 1;
    for(int i = 0; i < N; i++)
    {
        ans *= 2;
    }
    
    cout << ans;
    
    return 0;
}