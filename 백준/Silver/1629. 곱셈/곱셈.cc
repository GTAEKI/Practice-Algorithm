#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c;

int go(ll _a, ll _b)
{
    if(_b == 1) return _a % c;
    
    ll ret = go(_a, _b/2);
    ret = (ret * ret) % c;
    if(_b%2) ret = (ret * _a)%c;
    return ret;
    
}

int main()
{
    cin >> a >> b >> c;
    cout << go(a,b);
    return 0;
}