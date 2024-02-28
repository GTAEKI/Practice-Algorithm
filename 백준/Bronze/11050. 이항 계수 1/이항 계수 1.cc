#include<bits/stdc++.h>
using namespace std;

int N,K;
int ans;

int Recursion(int num);

int main()
{
    cin >> N >> K;
    int a = Recursion(N);
    int b = Recursion(N-K); 
    int c = Recursion(K);
    if(b == 0 || c == 0) cout << 0;
    else 
    {
        ans = a / (b * c);
        cout << ans;
    }
    
    return 0;
}

int Recursion(int num)
{
    if(num == 0) return 1;
    
    int temp = 1;
    for(int i = 1; i <= num; i++)
    {
        temp *= i;
    }
    return temp;
}