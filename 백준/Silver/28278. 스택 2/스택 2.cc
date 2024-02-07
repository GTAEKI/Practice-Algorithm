#include<bits/stdc++.h>
using namespace std;

int N;
stack<int> stk;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int X = 0;
        cin >> X;
        switch(X)
        {
            case 1:
                {
                int temp = 0;
                cin >> temp;
                stk.push(temp);
                break;
                }
            case 2:
                {
                if(stk.size())
                {
                    cout << stk.top() << "\n";
                    stk.pop();
                }
                else cout << -1 << "\n";
                break;
                }
            case 3:
                {
                cout << stk.size() << "\n";
                break;
                }
            case 4:
                {
                if(stk.size() == 0) cout << 1 << "\n";
                else cout << 0 << "\n";
                break;
                }
            case 5:
                {
                if(stk.size())
                {
                    cout << stk.top() << "\n";
                }
                else cout << -1 << "\n";
                break;
                }
        }
    }
    return 0;
}