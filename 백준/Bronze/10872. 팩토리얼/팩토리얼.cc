#include<bits/stdc++.h>
using namespace std;

int N;
int ans;

int main()
{
    cin >> N;
    ans = 1;
    
    for(int i = 1; i <= N; i ++)
    {
        ans *= i;
    }
    
    cout << ans;
    return 0;
}