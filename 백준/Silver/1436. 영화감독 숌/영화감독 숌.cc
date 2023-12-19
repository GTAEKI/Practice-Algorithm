#include<bits/stdc++.h>
using namespace std;

int N;

int main()
{
    cin >> N;
    int temp = 666;
    int ans = 0;
    int cnt = 0;
    
    while(true)
    {
        if(to_string(temp).find("666") != -1)
        {
            cnt++;
            ans = temp;
        }
        
        if(cnt == N)
        {
            break;
        }
        
        temp++;
    }
    
    cout << ans;
    
    return 0;
}