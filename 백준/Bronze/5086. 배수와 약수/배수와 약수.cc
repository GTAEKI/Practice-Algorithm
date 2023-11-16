#include <bits/stdc++.h>
using namespace std;

int a = 0,b = 0;
bool ck = true;

int main()
{
   while(ck)
   {
       cin >> a >> b;
       
       if(a == 0 && b == 0)
       {
           ck = false;
           break;
       }
       
       if(b%a == 0)
       {
           cout << "factor";
       }
       else if(a%b == 0)
       {
           cout << "multiple";
       }
       else 
       {
           cout << "neither";
       }
       
       cout << "\n";
   }
}