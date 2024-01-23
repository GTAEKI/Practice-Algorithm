#include<bits/stdc++.h>
using namespace std;

int N;
int temp;
int arr[10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    
    for(int i = 1; i< 10001; i++)
    {
       if(arr[i]<=0) continue;
       else
       {
           cout << i << "\n";
           arr[i]--;
           i--;
       }
    }
    return 0;
}