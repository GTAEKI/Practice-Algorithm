#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    vector<int> tri;
    
    tri.clear();
    
    while(1)
    {
        cin >> a >> b >> c;
        if(a == 0)
        {
            break;
        }
        
        tri.push_back(a);
        tri.push_back(b);
        tri.push_back(c);
        sort(tri.begin(), tri.end());
        
        if(tri[0] + tri[1] <= tri[2])
        {
            cout << "Invalid";
        }
        else if(tri[0] == tri[1] && tri[1] == tri[2])
        {
            cout << "Equilateral";
        }
        else if(tri[0] == tri[1] || tri[0] == tri[2] || tri[2] == tri[1])
        {
            cout << "Isosceles";
        }
        else 
        {
            cout << "Scalene";
        }
        
        cout << "\n";
        
        tri.clear();
    }
    return 0;
}