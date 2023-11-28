#include<bits/stdc++.h>
using namespace std;

int a,b,c;
int from, to;
int sum;
int times[100];

int main()
{
    cin >> a >> b >> c;
    
    for(int i = 0; i < 3; i++)
    {
        cin >> from >> to;
        for(int j = from; j < to; j++)
        {
            times[j] += 1;
        }
    }
    
    for(int i : times)
    {
        if(i == 1)
        {
            sum += a;
        }
        else if(i == 2)
        {
            sum += b*2;
        }
        else if(i == 3)
        {
            sum += c*3;
        }
    }
    
    cout << sum;
    return 0;
}