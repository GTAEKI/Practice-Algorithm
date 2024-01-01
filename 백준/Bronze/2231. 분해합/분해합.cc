#include<bits/stdc++.h>
using namespace std;

int M,N;
bool ck = false;
int main()
{
    cin >> N;
    
    for(int i = 0; i <= N; i++)
    {
        int j = i;
        int k = 0;
        while(j > 0)
        {
            k = k + (j % 10);
            j = j / 10;
        }
        
        if(N == i+k)
        {
            cout << i;
            ck = true;
            break;
        }
    }
    
    if(ck == false) cout << 0;
    
    return 0;
}