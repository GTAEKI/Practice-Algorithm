#include<bits/stdc++.h>
using namespace std;

int N,a,t,ans;
vector<int> arr;
vector<int> bet;

int Check(int A, int B)
{
    if(A%B == 0) return B;
    else
    {
        return Check(B,A%B);
    }
}

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    
    for(int i = 0; i < arr.size()-1; i++)
    {
        bet.push_back(arr[i+1]-arr[i]);
    }
    
    sort(bet.begin(),bet.end()); 
    
    t = bet[0];
    for(int i = 1; i < bet.size(); i++)
    {
        t = Check(bet[i],t);
    }
    
    for(int i : bet)
    {
        ans += (i/t)-1;
    }
    
    cout << ans;
    return 0;
    
    
}