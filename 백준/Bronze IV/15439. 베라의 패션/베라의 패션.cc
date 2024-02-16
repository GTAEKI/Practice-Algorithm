#include<bits/stdc++.h>
using namespace std;

int N,cnt;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j) continue;
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}