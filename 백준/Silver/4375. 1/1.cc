#include<bits/stdc++.h>
using namespace std;

long n;
long long num,cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    while(cin >> n)
    {
        num = 1;
        cnt = 1;
        
        while(1)
        {
            if(num % n == 0)
            {
                cout << cnt << "\n";
                break;
            }
            
            num = (num * 10)%n + 1%n;
            cnt++;
        }
    }
    return 0;
}
