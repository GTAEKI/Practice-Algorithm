#include<bits/stdc++.h>
using namespace std;

int N;
int to;
int rev;
int ans,root;

vector<int> arr[51];

int dfs(int node)
{
    if(node == rev) return -1;
    if(arr[node].size() == 0)
    {
        ans++;
        return 0;
    }
    
    for(int i = 0; i<arr[node].size(); i++)
    {
        int temp = dfs(arr[node][i]);
        if(temp == -1 && arr[node].size() == 1)
        {
            ans++;
        }
    }
    return 0;
}

int main()
{
    cin >> N;
    for(int i = 0; i< N; i++)
    {
        cin >> to;
        if(to == -1) root = i;
        else arr[to].push_back(i);
    }
    
    cin >> rev;
    dfs(root);
    
    cout << ans;
    return 0;
}