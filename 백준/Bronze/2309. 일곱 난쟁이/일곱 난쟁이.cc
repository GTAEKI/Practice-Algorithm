#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights;
    int a = 0, sum = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> a;
        heights.push_back(a);
        sum += a;
    }
    
    sort(heights.begin(), heights.end());
    
    for(int i = 0; i < 8; i++)
    {
        for(int j = 1; j < 9; j++)
        {
            if(sum - (heights[i]+heights[j]) == 100)
            {
                for(int k = 0; k < 9; k++)
                {
                    if(k == i || k == j) continue;
                    cout << heights[k] << "\n";
                }
                return 0;
            }
        }
    }
    return 0;

    
    
}