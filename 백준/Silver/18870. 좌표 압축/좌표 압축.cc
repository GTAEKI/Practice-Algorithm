#include<bits/stdc++.h>
using namespace std;

int N,num;
vector<int> arr;
vector<int> temp;

int main()
{
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> num;
        arr.push_back(num);
        temp.push_back(num);
    }
    
    sort(temp.begin(),temp.end());
    temp.erase(unique(temp.begin(),temp.end()),temp.end());

    
    for(int i = 0; i < arr.size(); i++)
    {
        auto j = lower_bound(temp.begin(),temp.end(),arr[i]);
        int k = j - temp.begin();
        cout << k << " ";
    }
    return 0;
}