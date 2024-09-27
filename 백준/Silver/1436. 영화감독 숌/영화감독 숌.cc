#include<bits/stdc++.h>
using namespace std;

int n,cnt,ret;
string temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(nullptr);
    
    cin >> n;
    
    while(true)
    {
        ret++;
        if(to_string(ret).find("666") != string::npos)
        {
            cnt++;
        }
        
        if(cnt == n) break;
    }
    
    cout << ret <<"\n";
    return 0;
}