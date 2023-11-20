#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum = 0;
    vector<int> nums;
    while(1)
    {
        sum = 0;
        nums.clear();
        cin >> n;
       
        if(n == -1)
        {
            break;
        }
        
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
                nums.push_back(i);
            }
        }
        
        if(sum == n)
        {
            cout << n << " = ";
            for(int i = 0; i < nums.size()-1; i++)
            {
                cout << nums[i] << " + ";
            }
            cout << nums[nums.size()-1];
        }
        else
        {
            cout << n << " is NOT perfect.";
        }
        
        cout << "\n";
    }
}