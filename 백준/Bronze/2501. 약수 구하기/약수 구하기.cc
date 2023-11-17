#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> nums;
int main()
{
    cin >> n >> k;
    
    for(int i = 1; i < n+1; i++)
    {
        if(n%i == 0)
        {
            nums.push_back(i);
        }
    }
    
    if(nums.size() < k)
    {
        cout << 0;
    }
    else
    {
        cout << nums.at(k-1);
    }
    return 0;
}