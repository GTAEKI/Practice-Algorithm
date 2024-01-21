#include<bits/stdc++.h>
using namespace std;

int N;
int age;
string name;
vector<tuple<int,int,string>> arr;



bool compare(tuple<int,int,string> a, tuple<int,int,string> b)
{
    if(get<0>(a) == get<0>(b)) return get<1>(a) < get<1>(b);
    else return get<0>(a) < get<0>(b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> age >> name;
        arr.push_back(make_tuple(age,i,name));
    }
    
    sort(arr.begin(),arr.end(),compare);
    
    for(auto i : arr)
    {
        int x,y;
        string z;
        
        tie(x,y,z) = i;
        cout << x << " " << z << "\n";
    }
    return 0;
}