#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll A,B,C;

int cal(int a, int b)
{
    if(b==1) return a % C;
    
    ll ret = cal(a, b/2);
    ll ret2 = (ret * ret) % C;
    if(b % 2) ret2 = ret2 * a % C;
    return ret2;
}

int main()
{
    cin >> A >> B >> C;
    cout << cal(A,B);
    return 0;
}