#include<bits/stdc++.h>
using namespace std;


    int x,y,w,h;
    int a,b,c,d;

int main()
{
    vector<int> nums;
    
    cin >> x >> y >> w >> h;
    
    a = abs(x-0);
    nums.push_back(a);
    b = abs(y-0);
    nums.push_back(b);
    c = abs(x-w);
    nums.push_back(c);
    d = abs(y-h);
    nums.push_back(d);
    
    sort(nums.begin(), nums.end());
    
    cout << nums[0];
    
    return 0;
    
    
}