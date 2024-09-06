#include<bits/stdc++.h>
using namespace std;

int a,cnt;
string name;
int alpha[128] = {0,};

int main()
{
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> name;
        alpha[name[0]] += 1;
    }
    
    for(int i = 'a'; i <= 'z'; i++)
    {
        if(alpha[i] >= 5)
        {
            cout << (char)i;
            cnt++;
        }
    }
    if(cnt == 0)
    {
        cout << "PREDAJA";
    }
    return 0;
    
}