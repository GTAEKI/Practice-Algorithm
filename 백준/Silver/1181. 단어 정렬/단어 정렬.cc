#include <bits/stdc++.h>
using namespace std;

int N;
string s;
vector<string> arr;
set<string> check;

bool checkLess(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }
        else if (a[i] > b[i])
        {
            return false;
        }
    }
}

bool compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return checkLess(a, b);
    }
    else
    {
        return a.size() < b.size();
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (check.insert(s).second)
        {
            arr.push_back(s);
        }
    }

    sort(arr.begin(), arr.end(), compare);

    for (string i : arr)
    {
        cout << i << "\n";
    }
    return 0;
}
