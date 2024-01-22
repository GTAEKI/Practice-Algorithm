#include<bits/stdc++.h>
using namespace std;

int N, M;
int temp;
unordered_set<int> st;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for (int i = 0; i < N; i++) 
    {
        cin >> temp;
        st.insert(temp);
    }

    cin >> M;

    for (int i = 0; i < M; i++) 
    {
        cin >> temp;

        if (st.find(temp) != st.end()) 
        {
            cout << 1 << " ";
        } else 
        {
            cout << 0 << " ";
        }
    }
    return 0;
}
