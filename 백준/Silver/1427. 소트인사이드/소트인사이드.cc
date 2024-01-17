#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> arr;
int main()
{
    cin >> N;
    while(N>0)
    {
        int temp = N%10;
        N /= 10;
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end(),greater<>());
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0; 
}