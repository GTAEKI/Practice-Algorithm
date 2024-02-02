#include<bits/stdc++.h>
using namespace std;

long long N;
long long a;
vector<long long> arr;

bool IsPrime(long long A)
{ 
    if(A < 2) return false;
    long long sqt = sqrt(A);
    for(long long i = 2; i <= sqt; i++)
    {
        if(A % i == 0)
        {
            return false;
        }        
    }
    return true;
}

long long CalPrime(long long A)
{
    while(1)
    {
        if(IsPrime(A)) return A;
        A++;
    }
}

int main()
{
    cin >> N;
    for(long long i = 0; i < N; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    
    for(auto i : arr)
    {
        cout << CalPrime(i) << "\n";
    }
}