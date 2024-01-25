#include<bits/stdc++.h>
using namespace std;

int N,M,temp,temp2;
int arr[20000000];
vector<int> ans;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        arr[temp+10000000]++;
    }
    
    cin >> M;
    for(int i = 0 ; i<M ; i++)
    {
        cin >> temp;
        temp2 = arr[temp+10000000];
        ans.push_back(temp2);
    }
    
    for(int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}