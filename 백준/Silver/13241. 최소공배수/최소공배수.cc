#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll A,B;

int Check(ll a, ll b)
{
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        return Check(b,a%b);
    }
}

int main()
{
    cin >> A >> B;
    
    if(A > B)
    {
       cout << A * B / Check(A,B);
    }
    else 
    {
       cout << A * B / Check(B,A);
    }
    
    return 0;
}