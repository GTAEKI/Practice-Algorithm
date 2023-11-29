#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    
    for (int i = 0; i < name.length(); i++) 
    {
        if (isalpha(name[i])) 
        {
            if (islower(name[i])) 
            {
                name[i] = 'a' + (name[i] - 'a' + 13) % 26;
            } 
            else
            {
                name[i] = 'A' + (name[i] - 'A' + 13) % 26;
            }
        }
    }
    
    cout << name << endl;
    
    return 0;
}
