#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m = 0, n=0,cnt =0, sum = 0, min = -1;
    vector<int> nums;
    cin >> m >> n;
    
    for(int i = m; i <= n; i++)
    {   
        cnt = 0;
        
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    cnt++;
                }
            }
            
            if(cnt == 2)
            {
                nums.push_back(i);
                sum += i;
                if(min == -1)
                {
                    min = i;
                }
            }
        
    }
    
    if(min == -1)
    {
        cout << min;
    }
    else
    {
    cout << sum << "\n";
    cout << min;
    }
    return 0;
    
}