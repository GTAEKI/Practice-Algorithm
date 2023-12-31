#include<bits/stdc++.h>
using namespace std;

int a1,a0;
int c;
int n0;
int fn,gn;

int main()
{
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;
    
    fn = (a1*n0) + a0;
    gn = c * n0;
    
    if(fn <= gn && a1 <= c) cout << 1;
    else cout << 0;
    
    return 0;
}