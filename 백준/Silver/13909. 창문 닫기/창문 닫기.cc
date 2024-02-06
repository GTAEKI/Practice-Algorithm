#include<bits/stdc++.h>
using namespace std;

int N;
int cnt;

int main()
{
    cin >> N;
    
    for(int i = 1; i * i <= N; ++i) cnt++;

    cout << cnt;
}