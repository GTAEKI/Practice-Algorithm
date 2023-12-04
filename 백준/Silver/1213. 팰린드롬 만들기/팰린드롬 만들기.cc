#include<bits/stdc++.h>
using namespace std;

string s, ret;
int cnt[200], flag;
char mid;

int main() 
{
	cin >> s;
	for (char a : s)
		cnt[a]++;
	for (int i = 'Z'; i >= 'A'; i--)
	{
		if (cnt[i]%2 == 1)
		{
			mid = char(i);
			flag++;
			cnt[i]--; // 미드를 뽑았기 때문에 짝수로 만든다.
		}
		if (flag == 2) // 홀수가 2개 이상이면 종료
			break;
		for (int j = 0; j < cnt[i]; j += 2) // 앞뒤로 붙이기 때문에 2씩 증가
		{
			ret = char(i) + ret; // 앞에 문자넣기
			ret += char(i); // 뒤에 문자넣기
		}
	}
    
	if (mid) // 가운데 수가 있다면 삽입, 없다면 삽입 X
    {
        ret.insert(ret.begin() + ret.size() / 2, mid);
    }
		
	if (flag == 2)
		cout << "I'm Sorry Hansoo";
	else
		cout << ret;
    
	return 0;
}