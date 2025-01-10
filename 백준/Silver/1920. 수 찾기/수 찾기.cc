#include<bits/stdc++.h>
using namespace std;

int n, m, temp;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    unordered_map<int,int> arrM;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        arrM[temp] = 1;
    }
    
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        if(arrM[temp] == 1)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    
    return 0;
}