#include<bits/stdc++.h>
using namespace std;
int n;
string s, temp;
vector<string> arr;

bool cmp (string a, string b)
{
    if(a.size() == b.size())
    {
        return a<b;
    }
    
    return a.size() < b.size();
}

void cal()
{
    while(true)
    {
        if(temp.size() && temp.front() == '0') temp.erase(temp.begin());
        else break;
    }
    
    if(temp.size() == 0) temp = "0";
    arr.push_back(temp);
    temp = "";
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] >= '0' && s[j] <= '9') temp += s[j];
            else if(temp.size()) cal();
        }
        if(temp.size()) cal();
    }
    
    sort(arr.begin(), arr.end(),cmp);
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    
    
    return 0;
}