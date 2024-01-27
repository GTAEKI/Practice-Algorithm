#include<bits/stdc++.h>
using namespace std;

int A,B;
int temp;
set<int> Ast;
set<int> Bst;
set<int> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> A >> B;
    for(int i = 0; i< A; i++)
    {
        cin >> temp;
        Ast.insert(temp);
    }
    
    for(int i = 0; i<B; i++)
    {
        cin >> temp;
        Bst.insert(temp);
    }
    
    for(int i : Ast)
    {
        if(Bst.find(i) != Bst.end()) continue;
        else ans.insert(i);
    }
    
    for(int i : Bst)
    {
        if(Ast.find(i) != Ast.end()) continue;
        else ans.insert(i);
    }
    
    cout << ans.size();
    return 0;
}