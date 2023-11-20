#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, cnt = 0;
    int saveNum = 0;
    cin >> n;
    saveNum = n;
    
    if(n == 1)
    {
        cout << "";
        return 0;
    }
    
    for(int i = 2; i <= n; i++)
    {  
            while(1)
            {
                if(saveNum % i != 0)
                {
                    break;
                }
                else
                {
                    saveNum /= i;
                    cout << i << "\n";
                }
            }
            
            if(saveNum <= 1)
            {
                return 0;
            }            
    }
}