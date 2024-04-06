#include<bits/stdc++.h>
using namespace std;

int n;

int cal(int num,int cnt)
{
    if(num % n == 0)
    {
        return cnt;
    }
    else
    {
        num = (num * 10+ 1) % n;
        return cal(num, ++cnt);
    }
}

int main()
{
    while(cin >> n)
    {
        cout << cal(1,1) << "\n";
    }
    return 0;
}