#include<bits/stdc++.h>
using namespace std;

int N,M;
string temp;
set<string> st;
vector<string> a;

int main()
{
    cin >> N >> M;
    for(int i = 0; i<N; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    
    for(int i = 0; i < M; i++)
    {
        cin >> temp;
        if(st.find(temp) != st.end())
        {
            a.push_back(temp);
        }
    }
    
    sort(a.begin(),a.end());
    
    cout << a.size() << "\n";
    for(auto i : a)
    {
        cout << i << "\n";
    }
    return 0;
}