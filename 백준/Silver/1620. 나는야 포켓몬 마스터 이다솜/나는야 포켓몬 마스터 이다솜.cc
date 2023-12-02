#include<bits/stdc++.h>
using namespace std;

int n,m;
map<string,int> mp1;
map<int,string> mp2;
string s;
string temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        mp1[s] = i+1;
        mp2[i+1] = s;
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        if(isdigit(temp[0])==0)
           {
               cout << mp1[temp] << "\n";
           }
           else
           {
               cout << mp2[stoi(temp)] << "\n";
           }
    }
           return 0;
}