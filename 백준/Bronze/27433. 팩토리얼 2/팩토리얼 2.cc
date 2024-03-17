#include<bits/stdc++.h>
using namespace std;

long long recursive(long long num)
{
    if(num == 1) return num;
    num *= recursive(num-1);
    return num;
}

int main()
{
    int N = 0;
    cin >> N;
    if(N == 0) cout << 1;
    else cout << recursive(N);
    return 0;
}