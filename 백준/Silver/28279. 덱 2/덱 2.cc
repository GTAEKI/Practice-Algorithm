#include<bits/stdc++.h>
using namespace std;

int N;
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i< N; i++)
    {
        int temp;
        cin >> temp;
        switch(temp)
        {
            case 1:
                {
                    int temp2;
                    cin >> temp2;
                    dq.push_front(temp2);
                    break;
                }
            case 2:
                {
                    int temp2;
                    cin >> temp2;
                    dq.push_back(temp2);
                    break;
                }
            case 3:
                {
                    if(dq.size() == 0) cout << -1 << "\n";
                    else 
                    {
                        cout << dq.front() << "\n";
                        dq.pop_front();
                    }
                    break;
                }
            case 4:
                {
                    if(dq.size() == 0) cout << -1 << "\n";
                    else 
                    {
                        cout << dq.back() << "\n";
                        dq.pop_back();
                    }
                    break;
                }
            case 5:
                {
                    cout << dq.size() << "\n";
                    break;
                }
            case 6:
                {
                    if(dq.size() == 0) cout << 1 << "\n";
                    else cout << 0 << "\n";
                    break;
                }
            case 7:
                {
                    if(dq.size() == 0) cout << -1 << "\n";
                    else 
                    {
                        cout << dq.front() << "\n";
                    }
                    break;
                }
            case 8:
                {
                    if(dq.size() == 0) cout << -1 << "\n";
                    else 
                    {
                        cout << dq.back() << "\n";
                    }
                    break;
                }
        }
    }
    return 0;
}