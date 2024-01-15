#include<bits/stdc++.h>
using namespace std;

int n,sum;
int ret1,ret2;
vector<int> arr;
int main()
{
    for(int i = 0; i<5; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    
    sort(arr.begin(),arr.end());
    for(int i : arr)
    {
        sum += i;
    }
    ret1 = sum / 5;
    ret2 = arr[2];
    cout << ret1 << "\n";
    cout << ret2 << "\n";
    return 0;
    
}