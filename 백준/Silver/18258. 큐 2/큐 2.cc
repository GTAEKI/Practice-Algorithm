#include<bits/stdc++.h>
using namespace std;

int N;
string str;
queue<int> que;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int temp;
            cin >> temp;
            que.push(temp);
        }
        else if (str == "pop")
        {
            if (que.size() == 0)
                cout << -1 << "\n";
            else
            {
                cout << que.front() << "\n";
                que.pop();
            }
        }
        else if (str == "size")
        {
            cout << que.size() << "\n";
        }
        else if (str == "empty")
        {
            if (que.size() == 0) cout << 1 << "\n";
            else cout << 0 << "\n";
                
        }
        else if (str == "front")
        {
            if (que.size() == 0)  cout << -1 << "\n";
            else cout << que.front() << "\n";                
        }
        else if (str == "back")
        {
            if (que.size() == 0) cout << -1 << "\n";                
            else cout << que.back() << "\n";                
        }
    }
    return 0;
}
