#include<bits/stdc++.h>
using namespace std;

int a,b,c;
int result[101];
int sum;

int main()
{
    cin >> a >> b >> c;
    for(int i = 0; i < 3; i++)
    {
        int d,e;
        cin >> d >> e;
        for(int j = d; j < e; j++)
        {
            result[j]++;
        }
    }
    
    for(int i = 0; i <= 100; i++)
    {
        switch(result[i])
        {
            case 0:
                break;
            case 1:
                sum+= a;
                break;
            case 2:
                sum+= b*2;
                break;
            case 3:
                sum+= c*3;
                break;
        }
    }
    
    cout << sum;
    return 0;
}