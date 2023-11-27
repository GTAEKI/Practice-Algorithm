#include<bits/stdc++.h>
using namespace std;

string name;

int main()
{
    cin >> name;
    
    int answer[26] = {0,};
    
    for(int i = 0; i < name.length(); i++)
    {
        answer[name[i] - 'a'] += 1;
    }
    
    for(int a : answer)
    {
        cout << a << " ";
    }
    return 0;
}