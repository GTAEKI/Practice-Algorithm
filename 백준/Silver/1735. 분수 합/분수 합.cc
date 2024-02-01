#include<bits/stdc++.h>
using namespace std;

int A,B,C,D;
int par,son;
int t;

int Check(int a, int b)
{
    if(a%b == 0) return b;
    else return Check(b, a%b);
}

int main()
{
    cin >> A >> B >> C >> D;
    par = B * D;
    son = (A*D)+(B*C);
    
    if(par > son)
    {
        t = Check(par,son);
    }
    else
    {
        t = Check(son,par);
    }
    
    cout << son/t << " ";
    cout << par/t << "\n";
    
    return 0;
}