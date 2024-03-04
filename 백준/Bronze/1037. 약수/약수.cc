#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> arr;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());
    int ans = arr[0] * arr[N-1];
    cout << ans;
    return 0;
}