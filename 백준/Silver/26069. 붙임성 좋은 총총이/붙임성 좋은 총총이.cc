#include<bits/stdc++.h>
using namespace std;

int N;
string A,B;
set<string> arr;

int main()
{
    cin >> N;
    arr.insert("ChongChong");
    for(int i = 0; i < N; i++)
    {
        cin >> A >> B;
        if(arr.find(A) != arr.end() || arr.find(B) != arr.end())
        {
            arr.insert(A);
            arr.insert(B);
        }
    }
    cout << arr.size();
    return 0;
}