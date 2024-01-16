#include<bits/stdc++.h>
using namespace std;

int N,k;
int temp;
vector<int> arr;
int main()
{
    cin >> N >> k;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(), greater<>());
    
    cout << arr[k-1];
    return 0;
}