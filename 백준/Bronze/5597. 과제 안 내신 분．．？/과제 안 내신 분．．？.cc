#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n[28] = {0};
    int a;
    
    for(int i = 0; i < 28; i++)
    {
        cin >> a;
        n[i] = a;
    }
    sort(n, n + 28);
    
    int j = 0;
    
    for(int i = 1; i <= 30; i++)
    {
        if (i != n[j])
        {
            cout << i << endl;
        }
        else
        {
            j++;
        }
    }

    return 0;
}
