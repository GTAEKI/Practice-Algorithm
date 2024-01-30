#include<bits/stdc++.h>
using namespace std;

int T;
int A, B;
int ans;
vector<int> arr;

int check(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    return check(y, x % y);
}
 
int main()
{
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        if (A >= B)
        {
            cout << A * B / check(A, B) << "\n";
        }
        else
            cout << A * B / check(B, A) << "\n"; 
    }
    
    
}