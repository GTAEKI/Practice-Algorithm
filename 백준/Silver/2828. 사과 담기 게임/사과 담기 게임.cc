#include<bits/stdc++.h>
using namespace std;

int N,M,J;
int temp;
int ans;
int ptf,ptb;

int main()
{
    cin >> N >> M >> J;
    ptf = 1; //가장 앞쪽 바구니
    ptb = M; //가장 뒤쪽 바구니 
    
    for(int i = 0; i < J; i++)
    {
        cin >> temp;
            
        if(temp > ptb)
        {
            ans = ans + (temp-ptb);
            ptb = temp;
            ptf = ptb - (M-1);
        }
        else if(temp < ptf)
        {
            ans = ans + (ptf - temp);
            ptf = temp;
            ptb = ptf + (M-1);
        }
        else 
        {
            continue;
        }
    }
    
    cout << ans;
}