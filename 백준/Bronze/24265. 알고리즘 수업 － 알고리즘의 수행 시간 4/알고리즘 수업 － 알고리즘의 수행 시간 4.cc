#include<bits/stdc++.h>
using namespace std;

int main()
{
    long a, ans=0, b=0;
    cin >> a;
    b=a;
    for(int i = 0; i < a-1; i++)
    {
        b = b-1;
        ans += b;
    }
    cout << ans <<"\n" <<2;
}