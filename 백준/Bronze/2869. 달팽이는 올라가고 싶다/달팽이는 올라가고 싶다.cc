#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, v = 0, c = 0;
    int day = 0;
    int myPlace = 0;
    int d = 0;
    cin >> a >> b >> v;
    
    c = v - a;
    day = c / (a-b);
    if(c % (a-b) == 0)
    {
        cout << day + 1 ;
    }
    else
    {
        cout << day + 2 ;
    }
    
    /*
    while(1)
    {
        myPlace += a;
        if(myPlace >= v)
        {
            cout << day;
            break;
        }
        
        myPlace -= b;   
        day += 1;
    }
    */
}