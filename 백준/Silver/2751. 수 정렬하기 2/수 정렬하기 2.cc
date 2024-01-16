#include<bits/stdc++.h>
using namespace std;

int N,temp;
vector<int> arr;
int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end());
    for(int i : arr)
    {
        cout << i << "\n";
    }
    return 0;
}