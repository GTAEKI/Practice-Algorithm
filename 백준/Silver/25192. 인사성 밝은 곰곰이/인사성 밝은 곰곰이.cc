#include<bits/stdc++.h>
using namespace std;

int N;
string str;
set<string> user;

int main()
{
    int count = 0;
	cin >> N;
	while (N--)
	{
		cin >> str;
		if (str == "ENTER")
		{
			count += user.size();
			user.clear();
			continue;
		}
		user.insert(str);
	}
	count += user.size();
	cout << count;
    return 0;
}