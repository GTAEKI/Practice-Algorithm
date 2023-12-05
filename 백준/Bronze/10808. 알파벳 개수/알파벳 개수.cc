#include<bits/stdc++.h>
using namespace std;

string name;
int alpha[26];

int main()
{
    cin >> name;
    for(auto i : name)
    {
        int j = i-'a';
        alpha[j] += 1;
    }
    
    for(int i = 0; i < 26; i++)
    {
        cout << alpha[i] << ' ';
    }
}