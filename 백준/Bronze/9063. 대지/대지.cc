#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, x = 0, y = 0;
    int minX = 0,minY = 0,maxX = 0,maxY = 0;
    int area = 0;
    
    cin >> n;
    
    cin >> x >> y;
    minX = x;
    maxX = x;
    minY = y;
    maxY = y;
    
    for(int i = 0; i < n-1; i++)
    {
        cin >> x >> y;
        
        if(x < minX) minX = x;
        
        if(x > maxX) maxX = x;
        
        if(y < minY) minY = y;
        
        if(y > maxY) maxY = y;
    }
    
    area = (maxX - minX) * (maxY - minY);
    
    cout << area;
    
    
}