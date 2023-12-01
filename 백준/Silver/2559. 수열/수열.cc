#include<bits/stdc++.h>
using namespace std;

int n,k,num, sum[100001], ret = -2147483647;
vector<int> day;

int main()
{
   cin >> n >> k;
   for(int i = 1; i <= n; i++)
   {
       cin >> num;
       sum[i] = sum[i-1] + num;
   }
    
    for(int i = k; i <= n; i++)
    {
        ret = max(ret, (sum[i] - sum[i - k]));
    }
    
    cout << ret;
}