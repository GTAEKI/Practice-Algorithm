#include<iostream>
using namespace std;
int main()
{
    int n;
    int starNum = 1;
    cin >> n;
    char star = '*';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < starNum; j++)
        {
            cout << star;    
        }
        starNum += 1;
        cout << "\n";
    }
}