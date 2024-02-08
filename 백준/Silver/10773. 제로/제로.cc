#include<bits/stdc++.h>
using namespace std;

stack<int> stk;
int K,num,sum;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	cin >> K;

	for (int i = 0; i < K; i++)
    {
		cin >> num;
		if (num == 0) 
        {	
			stk.pop();	
		}
		else
			stk.push(num);
	}
    
    int temp = stk.size();
	for (int i = 0; i < temp; i++) 
    {
		sum += stk.top();
		stk.pop();
	}

	cout << sum << "\n";

	return 0;
}