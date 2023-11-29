#include<bits/stdc++.h>
using namespace std;

vector<char> can;
int n, a[26], cnt;
string name;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        a[name[0] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (a[i] >= 5) {
            cnt++;
            cout << (char)(i + 'a');
        }
    }

    
    if(cnt == 0)
    {
        cout << "PREDAJA";
    }
    return 0;
}