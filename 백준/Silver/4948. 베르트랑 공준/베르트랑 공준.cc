#include<bits/stdc++.h>
using namespace std;

bool arr[250000];

int main()
{
    while(true)
    {
        int n = 0;
        int ans = 0;
        cin >> n;
        if(n == 0) break;       
        
        for(int i = 0; i <= n*2; i++)
        {
            arr[i] = 0;
        }
        
        for(int i = 2; i <= n*2; i++)
        {
            for(int j = i+i; j <= n*2; j+= i)
            {
                if(arr[j]!=1)
                {
                    arr[j] = 1;
                }
            }
        }
        
        for(int i = n+1; i <= n*2; i++)
        {
            if(arr[i]== 0)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}