#include<bits/stdc++.h>
using namespace std;

int n,num;
bool check = false;
int main()
{
    int count = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        check = false;
        
        cin >> num;
        if(num == 0 || num == 1)
            {
                check = true;
            }  
        
        for(int j = 2; j < num+1/2; j++)
        {
              
            
            if(num % j == 0)
            {
                check = true;
            }
            
        }
        
        if(check == false)
        {
            count += 1;
        }
    }

    cout << count;
    
    
}