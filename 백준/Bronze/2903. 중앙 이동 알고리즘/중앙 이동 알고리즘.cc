#include<bits/stdc++.h>
using namespace std;

int main()
{
    int point = 2;
    int num;
    cin >> num;
    
    while(num--) point = point*2 -1;
    cout << point*point;
    return 0;
}