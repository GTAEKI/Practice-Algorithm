#include<bits/stdc++.h>
using namespace std;

int T;
int temp;
bool primes[1000001];

int main()
{
    primes[0] = true;
    primes[1] = true;
    for(int i = 2; i < 1000001; i++)
    {
        for(int j = i+i; j < 1000001; j+=i)
        {
            primes[j] = true;
        }
    }
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int ans = 0;
        cin >> temp;
        for(int j = 0; j < (temp/2)+1; j++)
        {
            if(primes[j] == false && primes[temp-j] == false)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}