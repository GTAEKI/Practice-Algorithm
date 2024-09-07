#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c;

ll cal(int n, int m)
{
    if(m == 1) return n % c;
    
    ll ret = cal(n, m/2);
    ret = (ret * ret ) % c;
    if(m & 1) ret = (ret * n) % c;
    return ret;
}

int main()
{
    cin >> a >> b >> c;
    cout << cal(a,b);
    return 0;
}