#include<bits/stdc++.h>
using namespace std;

int N;
string input;
string name, enter;
set<string> names;
stack<string> st;

int main()
{
    cin >> N;
    getline(cin,input);

    for(int i = 0; i < N; i++)
    {
        string temp;
        getline(cin,temp);
 
        name = temp.substr(0,temp.find(" "));
        names.insert(name);
        
        if(temp.substr(temp.find(" ")+1) == "leave")
        {
            names.erase(name);
        }
    }
           
    for(auto i : names)
    {
        st.push(i);
    }
    
    while(st.size() != 0)
    {
        cout << st.top() << "\n";
        st.pop();
    }
           
    return 0;
}