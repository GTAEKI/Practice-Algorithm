#include<bits/stdc++.h>
using namespace std;

deque<int> dq;
int N,M;
bool flag[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> flag[i];
    }
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if(flag[i]==0) dq.push_back(temp);
    }
    cin >> M;
    for(int i=0; i<M; i++)
    {
        int temp;
        cin >> temp;
        dq.push_front(temp);
        cout << dq.back() << " ";
        dq.pop_back();   
    }
}
