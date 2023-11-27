#include<iostream>
#include<string>
using namespace std;

string name;
int answer[26];

int main()
{
    cin >> name;
    
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