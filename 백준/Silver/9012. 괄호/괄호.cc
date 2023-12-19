#include<bits/stdc++.h>
using namespace std;

int T;
string a;

int main()
{
    
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {   
        int left = 0;
        int right = 0; 
        bool ck = true;
        
        cin >> a;
        
        for(char j : a)
        {
            if(j == '(') left++;
            else if(j == ')') right++;
            
            if(right > left) ck = false;          
        }
        
        if(ck == false) cout << "NO\n";
        else if(left != right) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}