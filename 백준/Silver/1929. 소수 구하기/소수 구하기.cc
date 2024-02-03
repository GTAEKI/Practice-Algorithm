#include<bits/stdc++.h>
using namespace std;

int start,ed;

bool isPrime(int a)
{
    if(a < 2) return false;
    int sqt = sqrt(a);
    for(int i = 2; i <= sqt; i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> start >> ed;
    for(int i = start; i <= ed; i++)
    {
        if(isPrime(i))
        {
            cout << i << "\n";
        }
    }
    return 0;
}