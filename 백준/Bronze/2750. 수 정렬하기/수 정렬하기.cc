#include<bits/stdc++.h>
using namespace std;

int N,m;
vector<int> arr;

int main()
{
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    
    sort(arr.begin(),arr.end());
    
    for(int i : arr)
    {
        cout << i << "\n";
    }
    return 0;
}